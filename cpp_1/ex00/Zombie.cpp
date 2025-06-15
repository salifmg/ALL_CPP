/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:16:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/15 21:06:19 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){

	return;
}

Zombie::~Zombie(void){

	std::cout << "Destructor Called for " << name << std::endl;
	return;
}

Zombie::Zombie(std::string new_name){

	std::cout << "Constructor Called" << std::endl;
	this->name = new_name;
	return;
}

void Zombie::announce(void){

	std::string Phrase = "BraiiiiiiinnnzzzZ...";

	std::cout << this->name + ": " + Phrase << std::endl;
	return;
}

std::string Zombie::get_name(){

	return (this->name);
}
