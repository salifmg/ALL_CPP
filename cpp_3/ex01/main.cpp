/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:11 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/12 20:54:04 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap obj("First");
	ClapTrap obj2(obj);
	std::cout << std::endl;

	obj.attack("Second");
	obj2.takeDamage(0);
	std::cout << std::endl;

	obj.attack("again");
	obj2.takeDamage(9);
	std::cout << std::endl;

	obj2.attack("First");
	obj.takeDamage(5);
	std::cout << std::endl;

	obj.beRepaired(10);
	obj2.attack("again");
	obj.takeDamage(14);
	std::cout << std::endl;

	obj.attack("again Second");
	obj2.takeDamage(100);
	std::cout << std::endl;

	obj2.attack("dont work");
	obj2.beRepaired(40);
	obj2.takeDamage(14);
	std::cout << std::endl;

	obj.attack("Spam to lose energy");
	obj.attack("Spam to lose energy");
	obj.attack("Spam to lose energy");
	obj.attack("Spam to lose energy");
	obj.attack("Spam to lose energy");
	obj.attack("Spam to lose energy");
	std::cout << std::endl;

	obj.attack("dont work");
	obj.beRepaired(100);
	std::cout << std::endl;

	ClapTrap obj3 = obj;
	obj3.attack("copy no energy");
	obj3.beRepaired(100);
	obj3.takeDamage(10000);
	std::cout << std::endl;

	obj.takeDamage(0);
	obj3.takeDamage(0);
	std::cout << std::endl;

	//MODIFIE LE MAIN PR TT TESTER
	return (0);
}

