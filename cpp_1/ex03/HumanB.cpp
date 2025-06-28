/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:33:22 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/28 19:30:53 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) 
{

	std::cout << "Constructor Called for " << this->name << std::endl;
	return ;
}

HumanB::~HumanB(void){

	std::cout << "Destructor Called for " << this->name << std::endl;
	return;
}

void HumanB::setWeapon(Weapon &weapon_name)
{
 	this->weapon = &weapon_name;
	return ;
}

void HumanB::attack(){

	if (this->weapon == NULL)
		std::cout << name << " has no weapon"<< std::endl;
	else
		std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
	return ;
}