/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:10:20 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/03 18:49:58 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

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
	char *task;
	const char *ADD = "ADD";
	const char *SEARCH = "SEARCH";
	const char *EXIT = "EXIT";
	// int stock_task = 0;
	PhoneBook instance;
	Contact instance2;

	std::cin >> task;
	// stock_task = instance.compare(task);
	if (ft_strcmp(task, ADD) == 0)
		std::cout << "ADD" << std::endl;
	else if (ft_strcmp(task, SEARCH) == 0)
		std::cout << "SEARCH" << std::endl;
	else if (ft_strcmp(task, EXIT) == 0)
		std::cout << "EXIT" << std::endl;
	return (0);
}
