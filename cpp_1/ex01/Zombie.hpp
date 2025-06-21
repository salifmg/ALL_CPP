/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:16:14 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/21 18:28:50 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {

public:
		Zombie(void);
		~Zombie(void);
		std::string getZombie(std::string new_name);
		void announce();

	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
