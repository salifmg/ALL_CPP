/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:33:16 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/16 16:13:54 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
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

#endif