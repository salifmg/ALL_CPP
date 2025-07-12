/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:32:34 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/12 20:32:04 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap :public ClapTrap {

public:
		ScavTrap(std::string Name);
		ScavTrap(const ScavTrap& FixedCpy);
		~ScavTrap();

		void attack(const std::string& target);
		void guardGate(void);
};

#endif