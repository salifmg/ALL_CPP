/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:33:20 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/11 19:41:53 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap :public ClapTrap {

public:
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(const FragTrap& FixedCpy);
		~FragTrap();

		void highFivesGuys(void);
};

#endif