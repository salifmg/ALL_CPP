/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:26:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/26 18:17:24 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	BitcoinExchange instance;

	if (ac != 2)
		return(std::cerr << "CORRECT USE ./btc <input_filename>" << std::endl, 1);

	try
	{
		instance.Checkfiles(av);
		instance.Validfirst_line();
		instance.Stock_database();
		instance.Stock_input();
		if (ac == 1)
			instance.Exchange_rate();
		//verifie validite input et CONVERTI si meme date

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// while (std::getline(file, input_line)) //lit dans l'input file
	// {
    //     std::string result;
    //     size_t i = 0;
    //     size_t i2 = 0;

    //     while (input_line[i]) Error opening
	// 	{
    //         if (input_line.compare(i, s1.size(), s1) == 0 && !s1.empty())
	// 		{
    //             result += s2;
    //             i += s1.size();
    //         } 
	// 		else 
	// 		{
    //             result += input_line[i];
    //             ++i;
    //         }
    //     }
	// 	std::cout << result << std::endl;
    // }
	return(0);
}