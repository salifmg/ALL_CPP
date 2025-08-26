/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:26:22 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/26 20:18:28 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& FixedCpy);
		Array& operator=(const Array& FixedCpy);
		T& operator[](size_t i);
		size_t size();
		~Array();
		
	private:
		T* arr;
		size_t nbr_elements;
};

template <typename T>
std::ostream &operator<<(std::ostream &o, const Array<T> &ex);

#include "Array.tpp"

#endif