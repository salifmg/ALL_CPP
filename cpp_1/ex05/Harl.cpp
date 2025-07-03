/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:52:53 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/03 17:13:54 by smagassa         ###   ########.fr       */
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
	int flag_complain = 1;
	
	std::vector<std::string> all_levels;
    all_levels.push_back("DEBUG");
    all_levels.push_back("INFO");
    all_levels.push_back("WARNING");
    all_levels.push_back("ERROR");
	// const char* arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    std::vector<void (Harl::*)()> diff_complain;	
    diff_complain.push_back(&Harl::debug);
    diff_complain.push_back(&Harl::info);
    diff_complain.push_back(&Harl::warning);
    diff_complain.push_back(&Harl::error);
	//void (Harl::*arr2[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	for (int i = 0 ; i < 4; i++)
	{
		if (level == all_levels[i])
		{
			(this->*diff_complain[i])();
			flag_complain = 0;
		} 
	}
	if (flag_complain == 1)
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
