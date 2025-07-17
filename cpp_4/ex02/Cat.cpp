/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:26:36 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/17 15:21:07 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"

Cat::Cat() :access_brain(new Brain)
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	return;
}

Cat::~Cat()
{
	delete (this->access_brain);
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat::Cat(const Cat& FixedCpy)
{
	this->type = FixedCpy.type;
	this->access_brain = new Brain(*FixedCpy.access_brain);
	std::cout << "Cat Copy constructor called" << std::endl;
	return;
}

Cat& Cat::operator=(const Cat& FixedCpy) {
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &FixedCpy)
	{
        this->type = FixedCpy.type;
        if (this->access_brain)
            delete this->access_brain;
        this->access_brain = new Brain(*FixedCpy.access_brain);
    }
    return (*this);
}


std::string Cat::getType(void)const {

	return (this->type);
}

void Cat::makeSound() const
{
	std::cout << "MIAOU IM A CAT" << std::endl;
	return;
}
