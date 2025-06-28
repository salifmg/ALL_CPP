/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:33:30 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/28 17:45:35 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {

public:
		HumanB(std::string);
		~HumanB(void);

		void attack(void);
		void setWeapon(Weapon &weapon);
	
	private:
		std::string name;
		Weapon *weapon;

};

#endif