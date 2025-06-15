/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:16:14 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/15 20:42:30 by smagassa         ###   ########.fr       */
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
		Zombie(std::string new_name);
		void announce(void);
		std::string get_name();

	private:
		std::string name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
