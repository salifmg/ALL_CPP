/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:42:10 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/18 20:07:56 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : name("NoName")
{
	std::cout << "Data default constructor called" << std::endl;
	return;
}

Data::~Data()
{
	std::cout << "Data destructor called" << std::endl;
	return;
}

Data::Data(const Data& FixedCpy)
{
	std::cout << "Data copy constructor called" << std::endl;
	this->name = FixedCpy.name;
	return;
}

Data& Data::operator=(const Data& FixedCpy)
{
	std::cout << "Data Copy assignment operator called" << std::endl;
	this->name = FixedCpy.name;
	return (*this);
}
