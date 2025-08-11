/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:08:49 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/11 19:39:08 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP
#include "iostream"
#include "string"

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& FixedCpy);
		ScalarConverter& operator=(const ScalarConverter& FixedCpy);
		~ScalarConverter();
	private:
		static void convert(std::string to_convert);
};



#endif