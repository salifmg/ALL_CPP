/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:39:09 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/10 20:15:49 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :comma_value(0) {

	return;
}

Fixed::Fixed(const int Value) {

	this->comma_value = Value << bits_nbr_fractional;
	return;
}

Fixed::Fixed(const float Value) {

	this->comma_value = roundf(Value * (1 << bits_nbr_fractional)); // PAREIL QUE * 256
	return;
}

Fixed::Fixed(const Fixed& FixedCpy) : comma_value(FixedCpy.getRawBits()){

	return;
}

Fixed::~Fixed() {

	return;
}

Fixed& Fixed::operator=(const Fixed& FixedCpy) {

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




bool Fixed::operator>(const Fixed& member_func)
{
    return (this->comma_value > member_func.getRawBits());
}

bool Fixed::operator<(const Fixed& member_func)
{
    return (this->comma_value < member_func.getRawBits());
}

bool Fixed::operator>=(const Fixed& member_func)
{
    return (this->comma_value >= member_func.getRawBits());
}

bool Fixed::operator<=(const Fixed& member_func)
{
    return (this->comma_value <= member_func.getRawBits());
}

bool Fixed::operator==(const Fixed& member_func)
{
    return (this->comma_value == member_func.getRawBits());
}

bool Fixed::operator!=(const Fixed& member_func)
{
    return (this->comma_value != member_func.getRawBits());
}



Fixed Fixed::operator+(const Fixed& member_func)
{
	Fixed tmp;

	tmp.comma_value = this->comma_value + member_func.comma_value;
    return (tmp);
}

Fixed Fixed::operator-(const Fixed& member_func)
{
	Fixed tmp;

	tmp.comma_value = this->comma_value - member_func.comma_value;
    return (tmp);
}

Fixed Fixed::operator*(const Fixed& member_func)
{
	Fixed tmp;

	tmp.comma_value = (this->comma_value * member_func.comma_value) >> bits_nbr_fractional;
    return (tmp);
}

Fixed Fixed::operator/(const Fixed& member_func)
{
	Fixed tmp;

	tmp.comma_value = (this->comma_value << bits_nbr_fractional) / member_func.comma_value;
    return (tmp);
}



Fixed& Fixed::operator++()
{
	comma_value++;
    return (*this);
}

Fixed& Fixed::operator--()
{
    comma_value--;
    return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;

    return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;

    return (tmp);
}



Fixed Fixed::min(Fixed& a, Fixed& b){

	if (a.getRawBits() > b.getRawBits())
		return (b.getRawBits());
	return (a);
}

const Fixed Fixed::min(const Fixed& a, const Fixed& b){

	if (a.getRawBits() > b.getRawBits())
		return (b.getRawBits());
	return (a);
}

Fixed Fixed::max(Fixed& a, Fixed& b){

	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed Fixed::max(const Fixed& a, const Fixed& b){

	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}