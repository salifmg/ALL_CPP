/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:25:19 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/17 15:21:45 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog :public AAnimal{
	public:
		Dog(void);
		Dog(const Dog& FixedCpy);
		Dog& operator=(const Dog& FixedCpy);
		~Dog(void);
		std::string getType(void) const;
		void makeSound() const;

	private:
		Brain* access_brain;
};

#endif