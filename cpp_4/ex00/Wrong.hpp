/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:33:16 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/15 18:27:36 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_HPP
#define WRONG_HPP
#include "Animal.hpp"

class WrongAnimal{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& FixedCpy);
		WrongAnimal& operator=(const WrongAnimal& FixedCpy);
		~WrongAnimal(void);
		std::string getType(void) const;
		void makeSound() const;
		
	protected:
		std::string type;
};

class WrongCat :public WrongAnimal{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& FixedCpy);
		WrongCat& operator=(const WrongCat& FixedCpy);
		~WrongCat(void);
		std::string getType(void) const;
};

#endif