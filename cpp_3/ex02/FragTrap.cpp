/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:33:13 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/11 19:51:51 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :ClapTrap() {
	this->Name = "Default FragTrap";
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "FragTrap default constructor called" << std::endl;
};

FragTrap::FragTrap(std::string Name) :ClapTrap(Name) {

	this->Name = Name;
	this->Hit_points = 100;
	this->Energy_points = 50;
	this->Attack_damage = 20;
	std::cout << "FragTrap constructor called" << std::endl;
	return;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap destructor called" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap& FixedCpy)
{
	this->Name = FixedCpy.Name;
	this->Hit_points = FixedCpy.Hit_points;
	this->Energy_points = FixedCpy.Energy_points;
	this->Attack_damage = FixedCpy.Attack_damage;
	std::cout << "FragTrap Copy constructor called" << std::endl;
	return;
}

void FragTrap::highFivesGuys(void){

	if (Hit_points > 0)
		std::cout << Name << " asks for highfives" << std::endl;
	else
		std::cout << Name << " cannot do highfives" << std::endl;
	return;
}