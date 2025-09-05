/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:41:43 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/05 21:14:09 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	
	try
	{
		Span other_sp = Span(10000);
		std::srand(static_cast<unsigned int>(std::time(0)));

		for (int i = 0; i < 10000; ++i) {
			other_sp.addNumber(rand() % 2147483647);
		}
		std::cout << "\nLOT OF NUMBERS\n" << other_sp.shortestSpan() << std::endl;
		std::cout << other_sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}


	try
	{
		Span other_sp = Span(50000);
		std::cout << "\nNO NUMBERS\n" << other_sp.shortestSpan() << std::endl;
		std::cout << other_sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
	

	try
	{
		Span other_sp = Span(10000);
		other_sp.addNumber(5);
		std::cout << "ONE NUMBER\n" << other_sp.shortestSpan() << std::endl;
		std::cout << other_sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
	

	try
	{
		Span other_sp = Span(1);
		other_sp.addNumber(2147483647);
		std::cout << "TOO MANY NUMBERS\n";
		other_sp.addNumber(247);
		std::cout << other_sp.shortestSpan() << std::endl;
		std::cout << other_sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}