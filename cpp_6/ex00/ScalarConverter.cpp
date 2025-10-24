/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:08:52 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/24 21:31:38 by smagassa         ###   ########.fr       */
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

void str_to_char(std::string to_convert, int i, char c)
{
    std::istringstream iss_char(to_convert);

	if ((iss_char >> i) && i >= 0 && i <= 127)
	{
		c = static_cast<char>(i);
		if (c >= 32 && c <= 127)
			std::cout << "string: " << c << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else if (i == 0)
		std::cout << "string: " << to_convert[0] << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	return;
}

void str_to_int(std::string to_convert, int i2, bool single, char c)
{
	if (single == 0)
		std::cout << "int: " << static_cast<int>(c) << std::endl; //atoi(to_convert.c_str())
	else
	{
		std::istringstream iss_int(to_convert);
		(iss_int >> i2);
		std::cout << "int: " << i2 << std::endl;
	}
	return;
}

void str_to_float(std::string to_convert, float f, bool single, char c)
{
	if (single == 0)
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(c) << "f" << std::endl; //strtof(str.c_str(), nullptr)
	else
	{
		std::istringstream iss_float(to_convert);
		(iss_float >> f);
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
	}
	return;
}

void str_to_double(std::string to_convert, double d, bool single, char c)
{
	if (single == 0)
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(c) << std::endl; //atof(str.c_str())
	else
	{
		std::istringstream iss_double(to_convert);
		(iss_double >> d);
		std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
	}
	return;
}

int check_if_char(std::string to_convert, char &c, bool single)
{
	c = to_convert[0];
	if (c >= 0 && c <= 127)
	{
		if (c >= 32 && c <= 127)
			std::cout << "char: " << c << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if ((!isdigit(to_convert[0])) && (c >= 32 && c <= 127)) //if single char
		{
			single = 0;
			return 1;
		}
	}
	else 
    	std::cout << "char: impossible" << std::endl;
	return 0;
}

int check_if_int(std::string to_convert, int &i)
{
	int start_pos = 0;

	if (to_convert[0] == '-' || to_convert[0] == '+') //check sign
		start_pos++;
	for (int pos = start_pos; to_convert[pos] != NULL; ++pos)
	{
		if (isdigit(to_convert[pos]) == 1)
			return 1;
	}

	long test_max_int = std::atol(to_convert.c_str());
	if (test_max_int > std::numeric_limits<int>::max() || test_max_int > std::numeric_limits<int>::min())
		return (std::cout << "int: impossible" << std::endl, 1);
		
	i = static_cast<int>(test_max_int);
	std::cout << "int: " << i << std::endl;
	return 0;
}

int check_if_float(std::string to_convert, float f)
{
	int count_sign = 0, count_f = 0, count_dot = 0, start_pos = 0;

	if (to_convert.find_first_not_of("0123456789-+.f") != std::string::npos)	//si un char pas voulu impossible
		return 1;
	

	if (to_convert[0] == '-' || to_convert[0] == '+') //check sign, skips it
		start_pos++;

	if (to_convert[start_pos] || isdigit(to_convert[start_pos])) //test before dot
		while (to_convert[start_pos] && isdigit(to_convert[start_pos]))
			start_pos++;
	else
		return 1;

	if (to_convert[start_pos] == '.')// skip dot
		start_pos++;
	else
		return 1;
	
	if (to_convert[start_pos] || isdigit(to_convert[start_pos])) //after dot values
		while (to_convert[start_pos] && isdigit(to_convert[start_pos]))
			start_pos++;

	if (to_convert[start_pos] == 'f' || to_convert[start_pos] == 'F') //if no value after dot
	{
		if (to_convert[start_pos + 1] == NULL)
		{
			char *endptr = NULL;
			const char *cstr = to_convert.c_str();
			double val = std::strtod(cstr, &endptr);

			if (endptr == cstr) // no convertion happened
				return 1;
			f = static_cast<float>(val);
			return (std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl, 0);
		}
		return 1;
	}
	return 1;
}

int check_if_double(std::string to_convert, double d)
{
	int count_sign = 0, count_f = 0, count_dot = 0, start_pos = 0;

	if (to_convert.find_first_not_of("0123456789-+.") != std::string::npos)	//si un char pas voulu impossible
		return 1;
	

	if (to_convert[0] == '-' || to_convert[0] == '+') //check sign, skips it
		start_pos++;

	if (to_convert[start_pos] || isdigit(to_convert[start_pos])) //test before dot
		while (to_convert[start_pos] && isdigit(to_convert[start_pos]))
			start_pos++;
	else
		return 1;

	if (to_convert[start_pos] == '.')// skip dot
		start_pos++;
	else
		return 1;
	
	if (to_convert[start_pos] || isdigit(to_convert[start_pos])) //after dot values
		while (to_convert[start_pos] && isdigit(to_convert[start_pos]))
			start_pos++;

	if (to_convert[start_pos]) //if no value after dot
		return 1;

	char *endptr = NULL;
	const char *cstr = to_convert.c_str();
	d = std::strtod(cstr, &endptr);

	if (endptr == cstr) // no convertion happened
		return 1;
	return (std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl, 0);
}

int convert_str(std::string to_convert, int i, char c, float f, double d, bool single)
{
	if (check_if_char(to_convert, c, single) == 0)
		return 1;
	if (check_if_int(to_convert, i) == 0)
		return 2;
	if (check_if_float(to_convert, f) == 0)
		return 3;
	if (check_if_double(to_convert, d) == 0)
		return 4;
}

void ScalarConverter::convert(std::string &to_convert)
{
    int i = 0;
	int i2 = 0;
	char c = 0;
    float f = 0;
    double d = 0;
	bool single = 1;


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
	if ((isprint(to_convert[0]) == 0) || (to_convert.length() != 1 && !isdigit(to_convert[0]))) //if error
	{
    	std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else
	{
		//une fonction de test qui return la val du type, dans une des variables
		int flag = convert_str(to_convert, i, c, f, d, &single);

		//donc tester leur val
		if (flag == 1)//commence par char
		{

		}
		else if (flag == 2)//puis si pas de points = int
		{

		}
		else if (flag == 3)//si un f avec point et nombr'e/es' = float, si pas de f mais point
		{

		}
		else if (flag == 4)//si pas de f mais point
		{

		}

		str_to_char(to_convert, i, c);
		if (to_convert.length() == 1 && !isdigit(to_convert[0])) //if single char
			c = to_convert[0], single = 0;
		str_to_int(to_convert, i2, single, c);
		str_to_float(to_convert, f, single, c);
		str_to_double(to_convert, d, single, c);
	}
    return;
}
//STATIC CAST