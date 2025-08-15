/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:11 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/15 19:20:22 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

//Non displayable
//impossible

int main(int ac, char **av)
{
	// if (ac == 1)
	// 	return (std::cout << "to input : <string to convert>" << std::endl, 1);
	(void)ac;
	(void)av;
	ScalarConverter ConvertHolder;

	std::string to_convert(av[1]);
	ConvertHolder.convert(to_convert);
		std::cout << std::endl;
	std::string str_invalid = "wefew";
	ConvertHolder.convert(str_invalid);
	std::cout << std::endl;

	std::string str_invalid2 = "abc5";
	ConvertHolder.convert(str_invalid2);
	std::cout << std::endl;

	std::string str_invalid3 = "	";
	ConvertHolder.convert(str_invalid3);
	std::cout << std::endl;

	std::string str = "8abc";
	ConvertHolder.convert(str);
	std::cout << std::endl;

	std::string str2 = "9";
	ConvertHolder.convert(str2);
	std::cout << std::endl;

	std::string str3 = "864";
	ConvertHolder.convert(str3);
	std::cout << std::endl;

	std::string str4 = "g";
	ConvertHolder.convert(str4);
	std::cout << std::endl;

	std::string str5 = "42";
	ConvertHolder.convert(str5);
	std::cout << std::endl;

	std::string str6 = "42.5";
	ConvertHolder.convert(str6);
	return (0);
}