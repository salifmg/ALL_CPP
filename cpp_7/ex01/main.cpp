/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 19:55:33 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/25 20:15:00 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
	int len = 5;
	float len_f = 2;
	double len_d = 2;

	int a[5] = {15, 588, 46, 42, 77};
	int b[2] = {};
	float c[2] = {55.8f};
	const double d[2] = {74.0, 7.5};
	std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

	std::cout << "INT \n";
	iter(a, len, PrintArray<int>), std::cout << std::endl;

	std::cout << "EMPTY \n";
	len = 2;
	iter(b, len, PrintArray<int>), std::cout << std::endl;

	std::cout << "FLOAT \n";
	iter(c, len_f, PrintArray<float>), std::cout << std::endl;

	std::cout << "DOUBLE \n";
	iter(d, len_d, PrintArray<const double>), std::cout << std::endl;
	
	std::cout << "STRING \n";
	len = 4;
	iter(cars, len, PrintArray<std::string>);
	return 0;
	}