/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:33:53 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/17 15:21:13 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal& FixedCpy)
{
	this->type = FixedCpy.type;
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	return;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& FixedCpy) {

	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	this->type = FixedCpy.type;
	return (*this);
}

std::string WrongAnimal::getType(void)const {

	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "HEY IM THE WRONG ANIMAL" << std::endl;
	return;
}
