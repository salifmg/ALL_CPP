/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:11:29 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/16 16:13:07 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"

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