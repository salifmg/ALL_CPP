/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:33:32 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/27 16:58:35 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){

	return;
}

Weapon::~Weapon(void){

	return;
}

Weapon::Weapon(std::string weaponName){

	setType(weaponName);
	return;
}

std::string Weapon::getType(void){

	return (this->type);
}

void Weapon::setType(std::string newType){

	this->type = newType;
	return ;
}
