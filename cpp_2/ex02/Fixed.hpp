/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:39:07 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/10 20:06:52 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed {

public:
		Fixed();
		Fixed(const Fixed& FixedCpy);
		Fixed& operator=(const Fixed& FixedCpy);
		~Fixed();
	
		int getRawBits(void) const;
		void setRawBits(int const raw);

		Fixed(const int Value);
		Fixed(const float Value);
		
		float toFloat(void) const;
		int toInt(void) const;
		

		bool operator>(const Fixed& member_func);
		bool operator<(const Fixed& member_func);
		bool operator>=(const Fixed& member_func);
		bool operator<=(const Fixed& member_func);
		bool operator==(const Fixed& member_func);
		bool operator!=(const Fixed& member_func);

		Fixed operator+(const Fixed& member_func);
		Fixed operator-(const Fixed& member_func);
		Fixed operator*(const Fixed& member_func);
		Fixed operator/(const Fixed& member_func);

		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);


		static Fixed min(Fixed& a, Fixed& b);
		static const Fixed min(const Fixed& a, const Fixed& b);

		static Fixed max(Fixed& a, Fixed& b);
		static const Fixed max(const Fixed& a, const Fixed& b);

		private:
			int comma_value;
			static const int bits_nbr_fractional = 8;
	};
	
	std::ostream& operator<<(std::ostream &o, const Fixed &ex);
	
#endif