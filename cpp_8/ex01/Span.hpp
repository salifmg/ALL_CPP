/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:41:33 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/07 21:27:20 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>


class Span
{
	public:
		Span();
		~Span();
		Span(unsigned int nbrs_to_hold);
		Span(const Span& FixedCpy);
		Span& operator=(const Span& FixedCpy);
		
		void addNumber(int nbr);
		int shortestSpan();
		int longestSpan();

		template <typename T>
		void addNumberRange(T begin, T end); 

		class NotEnoughNumbers : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "No number or only one is stored";
			}
		};
		
		class TooManyNumbers : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "To many numbers, cannot store all of them";
			}
		};

	private:
		unsigned int N;
		std::vector<int> contain;
};

#include "Span.tpp"

#endif