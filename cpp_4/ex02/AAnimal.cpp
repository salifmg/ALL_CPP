/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:30:07 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/17 16:27:59 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() :type("AAnimal")
{
	std::cout << "AAnimal constructor called" << std::endl;
	return;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
	return;
}
AAnimal::AAnimal(const AAnimal& FixedCpy) :type(FixedCpy.type)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	return;
}

AAnimal& AAnimal::operator=(const AAnimal& FixedCpy) {

	std::cout << "AAnimal Copy assignment operator called" << std::endl;
	this->type = FixedCpy.type;
	return (*this);
}

std::string AAnimal::getType(void)const {

	return (this->type);
}

void AAnimal::makeSound() const
{
	std::cout << "I AM AN ANIMAL" << std::endl;
	return;
}