/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:26:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/09 13:18:54 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN instance;
	std::string str;

	try
	{
		if (ac == 1 || ac > 2)
			throw std::runtime_error("Error");
		str = av[1];
		
		instance.Check_valitidy(str);
		instance.Take_while_numbers(str);// into container while not an operator
	}
	catch(const std::exception& e)
	{
		return (std::cerr << e.what() << '\n', 1);
	}
	return 0;
}
