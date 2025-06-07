/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:10:20 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/07 20:37:16 by smagassa         ###   ########.fr       */
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
	std::string task;
	const std::string ADD = "ADD";
	const std::string SEARCH = "SEARCH";
	const std::string EXIT = "EXIT";
	PhoneBook instance;
	Contact instance2;

	while (1)
	{
		std::cout << "SELECT A COMMAND ('ADD', 'SEARCH', 'EXIT'): ";
		if (!(std::getline(std::cin ,task)))
			break;
		if (task == ADD)
		{
			instance.new_contact();
			std::cout << "ADD" << std::endl;
			continue;
		}
		else if (task == SEARCH)
		{
			std::cout << "SEARCH" << std::endl;
			continue;
		}
		else if (task == EXIT)
		{
			std::cout << "EXIT" << std::endl;
			break;
		}
	}
	return (0);
}
