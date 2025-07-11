/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:07 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/11 21:32:39 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name) :Hit_points(10), Energy_points(0), Attack_damage(10){

	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::~ClapTrap() {

	std::cout << "Default destructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap& FixedCpy) :Name(FixedCpy.Name), Hit_points(FixedCpy.Hit_points), Energy_points(FixedCpy.Energy_points), Attack_damage(FixedCpy.Attack_damage)
{

	std::cout << "Copy constructor called" << std::endl;
	return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& FixedCpy) {


	std::cout << "Copy assignment operator called" << std::endl;

	this->Name = FixedCpy.Name;
	this->Hit_points = FixedCpy.Hit_points;
	this->Energy_points = FixedCpy.Energy_points;
	this->Attack_damage = FixedCpy.Attack_damage;
	return (*this);
}


void ClapTrap::attack(const std::string& target) {

	if (Hit_points > 0 && Energy_points > 0)
	{
		std::cout << "ClapTrap" << Name << "attacks" << target << ", causing" << Attack_damage << "points of damage!" << std::endl;
		Energy_points -= 1;
	}
	else if (Hit_points <= 0)
		std::cout << Name << "Hasn't enought hit points to attack" << std::endl;
	else if (Energy_points <= 0)
		std::cout << Name << "Hasn't enought energy to attack" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount) {

	if (Hit_points > 0)
	{
		std::cout << "Lost : " << amount << " amount of Hit_points"<< std::endl;
		Hit_points -= amount;
	}
	else if (Hit_points <= 0)
		std::cout << Name << "Hasn't enought hit points to take damage" << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (Hit_points > 0 && Energy_points > 0)
	{
		std::cout << "Regain : " << amount << " amount of Hit_points"<< std::endl;
		Hit_points += amount;
		Energy_points -= 1;
	}
	else if (Hit_points <= 0)
		std::cout << Name << "Hasn't enought hit points to repair" << std::endl;
	else if (Energy_points <= 0)
		std::cout << Name << "Hasn't enought energy to repair" << std::endl;
	return;
}
