/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:08:49 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/18 19:25:55 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <iomanip>

class ScalarConverter
{
	public:
		static void convert(std::string &to_convert);
		
	private:
			ScalarConverter();
			ScalarConverter(const ScalarConverter& FixedCpy);
			ScalarConverter& operator=(const ScalarConverter& FixedCpy);
			~ScalarConverter();
};



#endif