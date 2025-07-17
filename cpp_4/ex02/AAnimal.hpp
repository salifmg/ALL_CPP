/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:30:05 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/17 15:21:19 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "iostream"
#include "string"

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal& FixedCpy);
		AAnimal& operator=(const AAnimal& FixedCpy);
		virtual ~AAnimal(void);
		std::string getType(void) const;
		virtual void makeSound() const = 0;

	protected:
		std::string type;
};

#endif
