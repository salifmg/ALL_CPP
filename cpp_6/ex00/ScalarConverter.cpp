/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:08:52 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/18 20:03:08 by smagassa         ###   ########.fr       */
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
	(void)FixedCpy;
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

void str_to_char(std::string to_convert, int i2, char c)
{
    std::istringstream iss_char(to_convert);

	if ((iss_char >> i2) && i2 >= 0 && i2 <= 127)
	{
		c = static_cast<char>(i2);
		if (c >= 32 && c <= 127)
			std::cout << "string: " << c << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else if (i2 == 0)
		std::cout << "string: " << to_convert[0] << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	return;
}

void str_to_int(std::string to_convert, int i, bool single, char c)
{
	if (single == 0)
		std::cout << "int: " << static_cast<int>(c) << std::endl; //atoi(to_convert.c_str())
	else
	{
		std::istringstream iss_int(to_convert);
		(iss_int >> i);
		std::cout << "int: " << i << std::endl;
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
		str_to_char(to_convert, i2, c);
		if (to_convert.length() == 1 && !isdigit(to_convert[0])) //if single char
			c = to_convert[0], single = 0;
		str_to_int(to_convert, i, single, c);
		str_to_float(to_convert, f, single, c);
		str_to_double(to_convert, d, single, c);
	}
    return;
}
