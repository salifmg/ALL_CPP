/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:07 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/14 20:56:08 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name) :Name(Name), Hit_points(10), Energy_points(10), Attack_damage(0){

	std::cout << "ClapTrap constructor called" << std::endl;
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
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
		Energy_points -= 1;
		std::cout << "ClapTrap lost an energy point and has : " << Energy_points << " left" << std::endl;
	}
	else if (Hit_points <= 0)
		std::cout << Name << " hasn't enought hit points to attack" << std::endl;
	else if (Energy_points <= 0)
		std::cout << Name << " hasn't enought energy to attack" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount) {

	if (Hit_points > 0)
	{
		Hit_points -= amount;
		if (Hit_points < 0)
			Hit_points = 0;
		std::cout << "Lost : " << amount << " Hit_points, and has : "<< Hit_points << " left"<< std::endl;
	}
	else if (Hit_points <= 0)
		std::cout << Name << " hasn't enought hit points to take damage" << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (Hit_points > 0 && Energy_points > 0)
	{
		Hit_points += amount;
		std::cout << "Regain : " << amount << " Hit_points, and has : "<< Hit_points << " left"<< std::endl;
		Energy_points -= 1;
		std::cout << "ClapTrap lost an energy point and has : " << Energy_points << " left" << std::endl;
	}
	else if (Hit_points <= 0)
		std::cout << Name << " hasn't enought hit points to repair" << std::endl;
	else if (Energy_points <= 0)
		std::cout << Name << " hasn't enought energy to repair" << std::endl;
	return;
}

ClapTrap::ClapTrap() :Name(""), Hit_points(10), Energy_points(10), Attack_damage(0){

	std::cout << "Default ClapTrap constructor called" << std::endl;
	return;
}