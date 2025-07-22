/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:10:20 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/21 16:03:13 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	std::string cmd;
	const std::string ADD = "ADD";
	const std::string SEARCH = "SEARCH";
	const std::string EXIT = "EXIT";
	PhoneBook instance;

	while (1)
	{
		std::cout << "SELECT A COMMAND ('ADD', 'SEARCH', 'EXIT'): ";
		if (!(std::getline(std::cin, cmd)))
			break;
		if (cmd == ADD)
		{
			instance.new_contact();
			continue;
		}
		else if (cmd == SEARCH)
		{
			instance.search();
			continue;
		}
		else if (cmd == EXIT)
		{
			break;
		}
	}
	return (0);
}
