/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:08:52 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/11 19:48:32 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
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

void ScalarConverter::convert(std::string to_convert)
{

	return;
}