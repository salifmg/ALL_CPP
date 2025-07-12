/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:32:39 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/12 20:53:22 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name) {

	this->Name = Name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "Inherited constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap() {

	std::cout << "Inherited destructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap& FixedCpy)
{
	this->Name = FixedCpy.Name;
	this->Hit_points = FixedCpy.Hit_points;
	this->Energy_points = FixedCpy.Energy_points;
	this->Attack_damage = FixedCpy.Attack_damage;
	std::cout << "Inherited Copy constructor called" << std::endl;
	return;
}

void ScavTrap::attack(const std::string& target) {

	if (Hit_points > 0 && Energy_points > 0)
	{
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
		Energy_points -= 1;
		std::cout << "ScavTrap lost an energy point and has : " << Energy_points << " left" << std::endl;
	}
	else if (Hit_points <= 0)
		std::cout << Name << " hasn't enought hit points to attack" << std::endl;
	else if (Energy_points <= 0)
		std::cout << Name << " hasn't enought energy to attack" << std::endl;
	return;
}

void ScavTrap::guardGate(void){

	std::cout << "THE GUARD IS PROTECTING THE GATE" << std::endl;
	return;
}