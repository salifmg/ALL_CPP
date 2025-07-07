/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 18:39:07 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/07 16:08:34 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>

class Fixed {

public:
		Fixed();
		Fixed(const Fixed& FixedCpy);
		Fixed& operator=(const Fixed& FixedCpy);
		~Fixed();
	
		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int comma_value;
		static const int bits_nbr_fractional;
};

#endif