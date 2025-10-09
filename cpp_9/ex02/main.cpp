/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:26:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/09 15:53:59 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe	instance;

	try
	{
		if (ac < 3) // at least 2 values
			throw std::runtime_error("Error1");
		instance.Into_container(av, 0);


	}
	catch(const std::exception& e)
	{
		return (std::cerr << e.what() << '\n', 1);
	}
	return 0;
}