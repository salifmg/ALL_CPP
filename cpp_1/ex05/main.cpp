/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:33:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/30 18:45:39 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl customer;
	std::string level;

	while (1)
	{
		std::cout << "Enter a complain : ";
		std::getline(std::cin, level);
		if (std::cin.eof())
            break;

		customer.complain(level);
	}
	return (0);
}
