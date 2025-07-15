/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:30:05 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/15 21:09:49 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "iostream"
#include "string"

class Animal
{
	public:
		Animal(void);
		Animal(const Animal& FixedCpy);
		Animal& operator=(const Animal& FixedCpy);
		virtual ~Animal(void);
		std::string getType(void) const;
		virtual void makeSound() const;

	protected:
		std::string type;
};

#endif
