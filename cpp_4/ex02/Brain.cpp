/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:20:25 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/16 17:34:53 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	return;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return;
}

Brain::Brain(const Brain& FixedCpy)
{
	for (int i = 0; i < 100; ++i)
    	this->ideas[i] = FixedCpy.ideas[i];
	std::cout << "Brain Copy constructor called" << std::endl;
	return;
}

Brain& Brain::operator=(const Brain& FixedCpy) {

	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &FixedCpy) { //vérifier l'auto-affectation
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = FixedCpy.ideas[i];
    }
	return (*this);
}