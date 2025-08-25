/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 19:55:30 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/25 20:08:54 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void iter(T* array, size_t length, void (*func)(T&))
{
	for (size_t i = 0; i < length; ++i)
        std::cout << i << " element of array: ", func(array[i]);
	return;
}

template <typename T>
void PrintArray(T& array)
{
	std::cout << array << std::endl;
}

#endif
