/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:26:33 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/16 18:08:22 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat :public Animal{
	public:
		Cat(void);
		Cat(const Cat& FixedCpy);
		Cat& operator=(const Cat& FixedCpy);
		~Cat(void);
		std::string getType(void) const;
		void makeSound() const;
		
	private:
		Brain* access_brain;
};

#endif