/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:26:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/26 20:41:12 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array <unsigned int> empty_arr;
	try
	{
		empty_arr.size();
		empty_arr[0] = 50;
		std::cerr << empty_arr[0]  << '\n';
		empty_arr[1] = 42;
		std::cerr << empty_arr[1]  << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	Array <unsigned int> not_empty_arr(45);

	return(0);
}