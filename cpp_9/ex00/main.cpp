/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:26:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/01 14:11:33 by smagassa         ###   ########.fr       */
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
		instance.Exchange_rate();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}