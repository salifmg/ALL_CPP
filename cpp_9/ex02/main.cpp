/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:26:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/13 19:18:12 by smagassa         ###   ########.fr       */
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
		//lance timer general
		instance.Into_container(av, 0); //stock value into vector
		instance.Into_container(av, 1); //stock value into deque

	}
	catch(const std::exception& e)
	{
		return (std::cerr << e.what() << '\n', 1);
	}

	//lance 1er timer
	instance.Merge_insertion_sort(0); //sort container

	//lance 2eme timer
	instance.Merge_insertion_sort(1);

	return 0;
}