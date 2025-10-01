/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 14:57:24 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/01 16:58:10 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() :extract_input(NULL), extract_database(NULL){}

BitcoinExchange::~BitcoinExchange() {

	if (extract_input)
	{
		delete extract_input, extract_input = NULL;
		if (extract_database)
			delete extract_database, extract_database = NULL;
	}
}

void BitcoinExchange::Checkfiles(char **av) {

	input_filename = av[1];
	extract_input = new std::ifstream(input_filename.c_str());
	if (!extract_input)
		throw DosentOpenFile("input");
	
	database = "data.csv";
	extract_database = new std::ifstream(database.c_str());
	if (!extract_database)
		throw DosentOpenFile("database");
}


void BitcoinExchange::Validfirst_line() {

	std::getline(*extract_input, input_line);// Both skip first line (file format descriptor)
	std::getline(*extract_database, databases_line);

	if (input_line.compare("date | value"))
		extract_input->close(), throw BadLineFormat("input", "date | value");
	else if (databases_line.compare("date,exchange_rate"))
		extract_input->close(), extract_database->close(), throw BadLineFormat("database", "date,exchange_rate");
}

int check_date_validity(int year, int month, int day)
{
	if (year > 2025 || year < 2009 || month > 12 || month <= 0 || day > 31 || day <= 0)
		return 1;
	return 0;
}

void BitcoinExchange::Stock_database() {

	while(std::getline(*extract_database, databases_line))//DATABASE IN LIST | DATA AND VALUE
	{
		float	value;
		int year, month, day;
		char dash1, dash2, comma, extra;

		for (size_t i = 0; i != databases_line.size(); ++i)
			if (databases_line[i] == ' ')
				throw ParsingFailure("Error: data.csv shouldn't have any space", extract_input, extract_database);

		std::stringstream ss(databases_line);
		ss >> year >> dash1 >> month >> dash2 >> day >> comma >> value;
		if (ss.fail() || dash1 != '-' || dash2 != '-' || comma != ',' || ss >> extra)
			throw ParsingFailure("Error: data.csv has at least one incorrect Date, or value superior than float max", extract_input, extract_database);

		if (check_date_validity(year, month, day) == 1)
			throw ParsingFailure("Error: data.csv has at least one Date not valid", extract_input, extract_database);
		
		Date_n_val tmp_date;
		tmp_date.year = year, tmp_date.month = month, tmp_date.day = day;
		if (value < 0)
			throw ParsingFailure("Error: data.csv has at least one negative value", extract_input, extract_database);
		
		base_datas.push_back(std::make_pair(tmp_date, value));
	}
	// for (it2 = base_datas.begin(); it2 != base_datas.end(); ++it2) { //print all of the database
	// 	std::cout << it2->first[0] << "|" << it2->second << "\n";
	// }
}

void BitcoinExchange::Stock_input() {

	while(std::getline(*extract_input, input_line))//INPUT IN LIST | DATA AND VALUE
	{
		std::string tmp_date, tmp_value;
		int i = 0;

		if (!input_line[0])
		{
			input_datas.push_back(std::make_pair("", ""));
			continue;
		}
		while (input_line[i] && input_line[i] != '|')
			tmp_date += input_line[i++];

		if (input_line[i] && input_line[i + 2])
			while (input_line[++i])
				tmp_value += input_line[i];
		else if (input_line[i])		
			tmp_value = '0';
		input_datas.push_back(std::make_pair(tmp_date, tmp_value));
	}
	extract_input->close();
	extract_database->close();
	// for (it = input_datas.begin(); it != input_datas.end(); ++it) { //print all of the input file
	// 	std::cout << it->first << "|" << it->second << "\n";
	// }
}

void BitcoinExchange::Exchange_rate(){

	for (it = input_datas.begin(); it != input_datas.end(); ++it) {	//loop for input
		
		for (it2 = base_datas.begin(); it2 != base_datas.end(); ++it2) { //loop for database
			
			Date_n_val stock_input_vals;
			std::list<std::pair <Date_n_val, float> >::iterator it2_next = it2;

			if (Check_input_err(it->first, it->second, stock_input_vals) == 1) //error
				break;

			int return_value = Check_validity(stock_input_vals, it->first, it2->first, it2->second);
			if (return_value == 0) //value converted
				break;
			else if (return_value == 2 || ++it2_next == base_datas.end())//date passed, convert with previous or current value if its the last
			{
				if (it2 != base_datas.begin())
					--it2;
				Print_curr_past_value(stock_input_vals, it->first, it2->second);
				break;
			}
		}
	}
}

void Print_badinput(std::string date_input, std::string value_input)
{
	std::cout << "Error: bad input => " << date_input;
	if (!value_input.empty())
		std::cout << "|" << value_input << '\n';
	else 
		std::cout << value_input << '\n';

}

int Is_number(char str)
{
	if (str >= 0 && str <= 9)
		return (0);
	return 1;
}

int	BitcoinExchange::Check_input_err(std::string date_input, std::string value_input, Date_n_val& stock_input_vals){

	int year, month, day;
	char dash1, dash2, extra;
	std::stringstream ss(date_input);

	for (size_t i = 0; i != date_input.size(); ++i) //Only one space, last char
		if (databases_line[i] == ' ' && i != date_input.size() - 1)
			return (Print_badinput(date_input, value_input), 1);

	ss >> year >> dash1 >> month >> dash2 >> day;
	if (ss.fail() || dash1 != '-' || dash2 != '-' || ss >> extra)
		return (Print_badinput(date_input, value_input), 1);

	if (check_date_validity(year, month, day) == 1)
		return (Print_badinput(date_input, value_input), 1);
	stock_input_vals.year = year, stock_input_vals.month = month, stock_input_vals.day = day;

	float converted_value;
	std::stringstream ss2(value_input);
	//value exist, first char is a space, last char is a number
	if ((value_input.empty() || value_input[0] != ' ' || !Is_number(value_input[value_input.size() - 1]))) 
			return (Print_badinput(date_input, value_input), 1);

	ss2 >> converted_value; //convert to float
	if (converted_value > 1000 && !(ss2 >> extra))
		return (std::cout << "Error: too large number." << '\n', 1);
	else if (ss2.fail() || extra > 0)
		return (Print_badinput(date_input, value_input), 1);	
	else if (converted_value < 0)
		return (std::cout << "Error: not a positive number." << '\n', 1);

	stock_input_vals.value_input = converted_value;
	return (0);
}

int BitcoinExchange::Check_validity(Date_n_val input_vals, std::string date_input, Date_n_val date_database, float value_database){

	if (input_vals.year == date_database.year && input_vals.month == date_database.month && input_vals.day == date_database.day)
	{
		std::cout << date_input << "=> " << input_vals.value_input << " = " << value_database * input_vals.value_input << std::endl;
		return 0;
	}
	else if (input_vals.year < date_database.year || (input_vals.year == date_database.year && input_vals.month < date_database.month) ||
			(input_vals.year == date_database.year && input_vals.month == date_database.month && input_vals.day < date_database.day))
	{
		return 2;
	}
	return 1;
}

void BitcoinExchange::Print_curr_past_value(Date_n_val input_vals, std::string date_input, float value_database) {

	std::cout << date_input << "=> " << input_vals.value_input << " = " << value_database * input_vals.value_input << std::endl;
	return;
}
