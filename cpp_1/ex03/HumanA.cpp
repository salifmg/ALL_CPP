/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:33:23 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/28 19:26:38 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_name) : name(name) , weapon(weapon_name)
{

	std::cout << "Constructor Called for " << this->name << std::endl;
	return ;
}

HumanA::~HumanA(void){

	std::cout << "Destructor Called for " << this->name << std::endl << std::endl;
	return;
}

void HumanA::attack(){

	std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;
	return ;
}
