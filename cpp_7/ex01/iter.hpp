/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 19:55:30 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/30 16:28:28 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>


// template <typename T> ONLY WORKS WITH TEMPLATE FUNCTIONS
// void iter(T* array, const size_t length, void (*func)(T&))
// {
// 	for (size_t i = 0; i < length; ++i)
//         std::cout << i << " element of array: ", func(array[i]);
// 	return;
// }

template <typename T, typename F>
void iter(T* array, const int length, F f)
{
	if (!array || !f || length < 0)
		return;
	for (int i = 0; i < length; ++i)
        std::cout << i << " element of array: ", f(array[i]);
	return;
}

template <typename T>
void PrintArray(T& array)
{
	std::cout << array << std::endl;
}

void PrintArray2(std::string array)
{
	std::cout << array << std::endl;
}

#endif
