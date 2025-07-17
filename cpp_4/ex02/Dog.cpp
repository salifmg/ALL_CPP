/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:25:22 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/17 15:21:10 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"

Dog::Dog() :access_brain(new Brain)
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	return;
}

Dog::~Dog()
{
	delete (this->access_brain);
	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog::Dog(const Dog& FixedCpy)
{
	this->type = FixedCpy.type;
	this->access_brain = new Brain(*FixedCpy.access_brain);
	std::cout << "Dog Copy constructor called" << std::endl;
	return;
}

Dog& Dog::operator=(const Dog& FixedCpy) {
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &FixedCpy)
	{
        this->type = FixedCpy.type;
        if (this->access_brain)
            delete this->access_brain;
        this->access_brain = new Brain(*FixedCpy.access_brain);
    }
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
