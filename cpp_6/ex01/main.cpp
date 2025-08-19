/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:11 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/19 19:28:31 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data("Random");
	Data* ptr = &data;

	uintptr_t raw = Serializer::serialize(ptr);
	Data* ptr2 = Serializer::deserialize(raw);

	std::cout << "ptr:   " << ptr << std::endl;
	std::cout << "ptr name: " << ptr->getName() << std::endl;
	std::cout << std::endl;

	std::cout << "raw:   " << raw << std::endl;

	std::cout << std::endl;
	std::cout << "ptr2:  " << ptr2 << std::endl;
	std::cout << "ptr name: " << ptr2->getName() << std::endl;
	return (0);
}