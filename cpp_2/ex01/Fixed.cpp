/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:39:09 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/10 20:08:34 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :comma_value(0) {

	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int Value) {

	this->comma_value = Value << bits_nbr_fractional;
	std::cout << "Int constructor called" << std::endl;
	return;
}

Fixed::Fixed(const float Value) {

	this->comma_value = roundf(Value * (1 << bits_nbr_fractional)); // PAREIL QUE * 256
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed& FixedCpy) : comma_value(FixedCpy.getRawBits()){

	std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed& Fixed::operator=(const Fixed& FixedCpy) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->comma_value = FixedCpy.getRawBits();
	return(*this);
}

std::ostream &operator<<(std::ostream &o, const Fixed &ex)
{
    o << ex.toFloat();
    return (o);
}

int Fixed::getRawBits( void ) const {

	return(this->comma_value);
}

void Fixed::setRawBits( int const raw ) {

	this->comma_value = raw;
	return;
}

float Fixed::toFloat(void) const {

	return ((float)comma_value / (1 << bits_nbr_fractional));
}

int Fixed::toInt(void) const {

	return (this->comma_value / 256.0f);
}
