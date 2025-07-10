/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:29:22 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/10 20:33:26 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "\n" << Fixed::min( a, b ) << std::endl;

	std::cout << Fixed::max( a, a ) << std::endl;
	std::cout << Fixed::min( a, a ) << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	Fixed a2;
	std::cout << a2 + b << std::endl;
	std::cout << ++a2 << std::endl;
	std::cout << a2 - b << std::endl;	
	std::cout <<  a2 * b << std::endl;
	std::cout <<  a2 / b << std::endl;
	
	std::cout << ((a2 >= b) ? true : false ) << std::endl;
	std::cout << ((a2 > b) ? true : false ) << std::endl;
	std::cout << ((a2 < b) ? true : false ) << std::endl;
	std::cout << ((a2 <= b) ? true : false ) << std::endl;
	std::cout << ((a2 == b) ? true : false ) << std::endl;
	std::cout << ((a2 != b) ? true : false ) << std::endl;
	return 0;
}