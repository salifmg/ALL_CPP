/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:40:40 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/09 15:52:52 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void	PmergeMe::Into_container(char **av, bool flag_container){

	std::string str;
	long taken_value;
	int i = 0;

	if (flag_container == 0)
	{
		while (av[++i])
		{
			str = av[i];
			if (str.find_first_not_of("0123456789") != std::string::npos) //if not between 0-9 error
				throw std::runtime_error("Error2");

			taken_value = std::strtol(str.c_str(), NULL, 10); //taken value in long to test it
			if (taken_value == 0 || taken_value > INT_MAX)
				throw std::runtime_error("Error3");
			to_sort.push_back(std::atoi(str.c_str()));//stock value into vector
		}
	}
	else
	{
		while (av[++i])
		{
			str = av[i];
			if (str.find_first_not_of("0123456789") != std::string::npos) //if not between 0-9 error
				throw std::runtime_error("Error2.1");

			taken_value = std::strtol(str.c_str(), NULL, 10); //taken value in long to test it
			if (taken_value == 0 || taken_value > INT_MAX)
				throw std::runtime_error("Error3.2");
			to_sort2.push_back(std::atoi(str.c_str()));//stock value into vector
		}
	}
}