/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:41:33 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/05 21:12:07 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
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