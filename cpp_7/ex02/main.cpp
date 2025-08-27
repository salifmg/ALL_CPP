/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:26:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/27 18:19:52 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array <unsigned int> empty_arr;
	Array <unsigned int> empty_arr2(0);
	Array <unsigned int> not_empty_arr(45);
	Array <unsigned int> compare_arr(1);

	std::cout << "EMPTY ARRAY" << std::endl;
	try
	{
		std::cout << "size: "<< empty_arr.size() << std::endl;
		empty_arr[0] = 50;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}


	std::cout << "EMPTY ARRAY PARAMETER" << std::endl;
	try
	{
		std::cout << "size: "<< empty_arr2.size() << std::endl;
		std::cout << empty_arr2[0] << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}

	std::cout << "NEGATIVE PARAMETER" << std::endl;
	try
	{
		std::cout << empty_arr2[-1] << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}


	std::cout << "ARRAY PARAMETER" << std::endl;
	try
	{
		std::cout << "size: "<< not_empty_arr.size() << std::endl;
		not_empty_arr[44] = 50, std::cerr << not_empty_arr[44]  << '\n';
		not_empty_arr[0] = 42, std::cerr << not_empty_arr[0]  << '\n' << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "PARAMETER MORE THAN INITIALIZED" << std::endl;
	try
	{
		std::cerr << not_empty_arr[55]  << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}

	std::cout << "COMPARE VALUE WITH TWO ARRAYS" << std::endl;
	const int value = rand();
	not_empty_arr[0] = value, compare_arr[0] = value;
	
	if (not_empty_arr[0] != compare_arr[0])
		std::cerr << "Didn't save the same value" << std::endl;
	else
		std::cout << "Value is similar" << std::endl;

	return(0);
}