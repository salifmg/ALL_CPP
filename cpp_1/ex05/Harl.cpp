/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:52:53 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/30 19:02:48 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

void Harl::complain(std::string level)
{
// declare a pointer to member function
  	// Harl ptfptr = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (level == "DEBUG")
		debug();
	else if (level == "INFO")
		info();
	else if (level == "WARNING")
		warning();
	else if (level == "ERROR")
		error();
	else
		std::cout << "Enter a valid complain <DEBUG> <INFO> <WARNING> <ERROR>" << std::endl;
	return;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
	return;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
	return;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming foryears, whereas you started working here just last month.\n" << std::endl;
	return;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
	return;
}
