/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:08:52 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/18 20:03:30 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer default constructor called" << std::endl;
	return;
}

Serializer::~Serializer()
{
	std::cout << "Serializer destructor called" << std::endl;
	return;
}

Serializer::Serializer(const Serializer& FixedCpy)
{
	std::cout << "Serializer copy constructor called" << std::endl;
	(void)FixedCpy;
	return;
}

Serializer& Serializer::operator=(const Serializer& FixedCpy)
{
	std::cout << "Serializer Copy assignment operator called" << std::endl;
	(void)FixedCpy;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t greg;
	return(greg = (uintptr_t) ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *greg;
	return(greg = (Data *) raw);
}
