/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:33:53 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/15 19:18:06 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Wrong.hpp"

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





WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
	return;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat& FixedCpy)
{
	this->type = FixedCpy.type;
	std::cout << "WrongCat Copy constructor called" << std::endl;
	return;
}

WrongCat& WrongCat::operator=(const WrongCat& FixedCpy) {

	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	this->type = FixedCpy.type;
	return (*this);
}

std::string WrongCat::getType(void)const {

	return (this->type);
}

