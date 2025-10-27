/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:08:52 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/27 19:44:00 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
	return;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
	return;
}

ScalarConverter::ScalarConverter(const ScalarConverter& FixedCpy)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = FixedCpy;
	return;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& FixedCpy) {

	std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
	(void)FixedCpy;
	return (*this);
}

void Pseudo_literals(int flag, std::string to_convert)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (flag == 1) {
		std::cout << "float: " << to_convert << std::endl;
		std::cout << "double: " << to_convert.substr(0, to_convert.length() - 1) << std::endl;
	}
	else {
		std::cout << "float: " << to_convert << "f" << std::endl;
		std::cout << "double: " << to_convert << std::endl;
	}
}

int check_if_char(std::string to_convert, char &c)
{
	if (to_convert.size() == 1 && isdigit(to_convert[0]) == 0) //if not single char
	{
		c = to_convert[0];
		if (c >= 0 && c <= 127)
		{	
			std::cout << "char: " << c << std::endl;
			std::cout << "int: " << static_cast<int>(c) << std::endl;
			std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl; //strtof(str.c_str(), nullptr)
			return (std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl, 0);
		}
		return 1;
	}
	return 1;
}

int check_if_int(std::string to_convert, int &i)
{
	size_t index = 0;	
	if (to_convert[0] == '+' || to_convert[0] == '-')
		index++;
	for (size_t id = index; id < to_convert.size(); ++id) {
		if (isdigit(to_convert[id]) == 0)
			return 1;
	}

	const char *cstr = to_convert.c_str();
	long test_max_int = std::strtod(cstr, NULL);
	if (test_max_int > std::numeric_limits<int>::max() || test_max_int < std::numeric_limits<int>::min())
		return (1);

	i = std::atoi(cstr);

	if (to_convert.size() == 1) //if single digit
		std::cout << "char: " << i << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	return (std::cout  << "double: " << static_cast<double>(i) << std::endl, 0);
}

int check_if_float(std::string to_convert, float f)
{
	char *endptr = NULL;
	const char *cstr = to_convert.c_str();
	double tmp = std::strtod(cstr, &endptr);

    if (endptr == cstr) // no conversion
		return 1;
    if (*endptr != 'f' && *endptr != 'F') //+ or - not first or multiple / multiple .
		return 1;

	f = static_cast<float>(tmp);

	std::cout << "char: Non displayable" << std::endl;
	long test_max_int = std::atol(to_convert.c_str());
	if (test_max_int > std::numeric_limits<int>::max() || test_max_int < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f)<< std::endl;
	if (std::floor(f) == f)
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
	else 
		std::cout << "float: " << f << "f" << std::endl;
	return (std::cout << "double: " << static_cast<double>(f) << std::endl, 0);
}

int check_if_double(std::string to_convert, double d)
{
	char *endptr = NULL;
	const char *cstr = to_convert.c_str();
	d = std::strtod(cstr, &endptr);

	if (endptr == cstr) // no conversion
		return 1;
	if (*endptr != '\0') // theres a f / + or - not first or multiple / multiple .
		return 1;

	std::cout << "char: Non displayable" << std::endl;
	long test_max_int = std::atol(to_convert.c_str());
	if (test_max_int > std::numeric_limits<int>::max() || test_max_int < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d)<< std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	return (std::cout << "double: " << d << std::endl, 0);
}

void convert_str(std::string to_convert, int i, char c, float f, double d)
{
	if (check_if_char(to_convert, c) == 0 || check_if_int(to_convert, i) == 0 || check_if_float(to_convert, f) == 0 || check_if_double(to_convert, d) == 0)
		return ;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::convert(std::string &to_convert)
{
    int i = 0;
	char c = 0;
    float f = 0;
    double d = 0;

	if (to_convert == "nanf" || to_convert == "+inff" || to_convert == "-inff")
	{
		Pseudo_literals(1, to_convert);
		return;
	}
	else if (to_convert == "nan" || to_convert == "+inf" || to_convert == "-inf")
	{
		Pseudo_literals(0, to_convert);
		return;
	}
	if ((isprint(to_convert[0]) == 0) || ((to_convert.length() != 1 && !isdigit(to_convert[0]) && (!isdigit(to_convert[1]))))) //if error
	{
    	std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else
		convert_str(to_convert, i, c, f, d);
    return;
}
//test prntable