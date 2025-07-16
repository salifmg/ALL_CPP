/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:30:07 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/15 19:37:20 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() :type("animal")
{
	std::cout << "Animal constructor called" << std::endl;
	return;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	return;
}
Animal::Animal(const Animal& FixedCpy) :type(FixedCpy.type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	return;
}

Animal& Animal::operator=(const Animal& FixedCpy) {

	std::cout << "Animal Copy assignment operator called" << std::endl;
	this->type = FixedCpy.type;
	return (*this);
}

std::string Animal::getType(void)const {

	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "I AM AN ANIMAL" << std::endl;
	return;
}