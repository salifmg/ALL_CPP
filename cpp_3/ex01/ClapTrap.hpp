/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:10 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/12 20:36:38 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include "iostream"
#include "string"

class ClapTrap {

public:
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap& FixedCpy);
		ClapTrap& operator=(const ClapTrap& FixedCpy);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
		ClapTrap();

protected:
		std::string Name;
		int Hit_points;
		int Energy_points;
		int Attack_damage;
};

#endif
