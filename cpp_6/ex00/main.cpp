/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:11 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/18 19:55:25 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
		return (std::cout << "to input : <string to convert>" << std::endl, 1);
	
	std::string to_convert(av[1]);
	ScalarConverter::convert(to_convert);

	// 	std::cout << std::endl;
	// std::string str_invalid = "wefew";
	// ScalarConverter::convert(str_invalid);
	// std::cout << std::endl;

	// std::string str_invalid2 = "abc5";
	// ScalarConverter::convert(str_invalid2);
	// std::cout << std::endl;

	// std::string str_invalid3 = "	";
	// ScalarConverter::convert(str_invalid3);
	// std::cout << std::endl;

	// std::string str = "8abc";
	// ScalarConverter::convert(str);
	// std::cout << std::endl;

	// std::string str2 = "9";
	// ScalarConverter::convert(str2);
	// std::cout << std::endl;

	// std::string str3 = "864";
	// ScalarConverter::convert(str3);
	// std::cout << std::endl;

	// std::string str4 = "g";
	// ScalarConverter::convert(str4);
	// std::cout << std::endl;

	// std::string str5 = "42";
	// ScalarConverter::convert(str5);
	// std::cout << std::endl;

	// std::string str6 = "42.5";
	// ScalarConverter::convert(str6);
	return (0);
}