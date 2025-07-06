/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:39:09 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/06 18:45:28 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :comma_value(0) {

	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed() {

	std::cout << "Default destructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed& FixedCpy) : comma_value(FixedCpy.getRawBits()){

	std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed& Fixed::operator=(const Fixed& FixedCpy) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->comma_value = FixedCpy.getRawBits();
	return(*this);
}

int Fixed::getRawBits( void ) const {

	return(std::cout << "getRawBits member function called" << std::endl, this->comma_value);
}

void Fixed::setRawBits( int const raw ){

	this->comma_value = raw;
	return;
}