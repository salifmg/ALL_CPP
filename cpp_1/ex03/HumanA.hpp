/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:33:35 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/28 19:18:23 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {

public:
		HumanA(std::string, Weapon &weapon);
		~HumanA(void);

		void attack(void);

	private:
		std::string name;
		Weapon &weapon;
};

#endif