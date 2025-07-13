/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:11 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/13 20:09:32 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap obj("First");
	ClapTrap obj2(obj);
	std::cout << std::endl;

	ScavTrap inherit_obj("Third");
	ScavTrap inherit_obj2(inherit_obj);
	std::cout << std::endl;

	inherit_obj.attack("Second");
	inherit_obj2.takeDamage(0);
	inherit_obj.guardGate();
	std::cout << std::endl;

	inherit_obj.attack("again");
	inherit_obj2.takeDamage(99);
	std::cout << std::endl;

	inherit_obj2.attack("First");
	inherit_obj.takeDamage(5);
	std::cout << std::endl;

	inherit_obj.beRepaired(10);
	inherit_obj2.attack("again");
	inherit_obj.takeDamage(14000);
	std::cout << std::endl;

	inherit_obj.attack("dont work");
	inherit_obj.beRepaired(40);
	inherit_obj.takeDamage(14);
	std::cout << std::endl;

	ScavTrap inherit_obj3 = inherit_obj;
	inherit_obj3.attack("copy no energy");
	inherit_obj3.beRepaired(100);
	inherit_obj3.takeDamage(10000);
	std::cout << std::endl;

	inherit_obj.takeDamage(0);
	inherit_obj3.takeDamage(0);
	inherit_obj.guardGate();
	std::cout << std::endl;
	return (0);
}

