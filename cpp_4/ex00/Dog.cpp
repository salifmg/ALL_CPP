/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:25:22 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/15 19:17:23 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	return;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog::Dog(const Dog& FixedCpy)
{
	this->type = FixedCpy.type;
	std::cout << "Dog Copy constructor called" << std::endl;
	return;
}

Dog& Dog::operator=(const Dog& FixedCpy) {

	std::cout << "Dog Copy assignment operator called" << std::endl;
	this->type = FixedCpy.type;
	return (*this);
}

std::string Dog::getType(void)const {

	return (this->type);
}

void Dog::makeSound() const
{
	std::cout << "WOOF IM A DOG" << std::endl;
	return;
}
