/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:26:36 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/15 19:17:30 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	return;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat::Cat(const Cat& FixedCpy)
{
	this->type = FixedCpy.type;
	std::cout << "Cat Copy constructor called" << std::endl;
	return;
}

Cat& Cat::operator=(const Cat& FixedCpy) {

	std::cout << "Cat Copy assignment operator called" << std::endl;
	this->type = FixedCpy.type;
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
