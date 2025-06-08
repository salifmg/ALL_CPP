/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:10:20 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/08 19:44:19 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	ft_strcmp(char *s1, const char *s2)
{
	int		size;
	int		conv;
	int		conv2;

	size = 0;
	while (s1[size] || s2[size])
	{
		if (s1[size] == s2[size])
			size++;
		else
		{
			conv = s2[size] - '0';
			conv2 = s1[size] - '0';
			return (conv2 - conv);
		}
	}
	return (0);
}

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
