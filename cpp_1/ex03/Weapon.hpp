/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:33:20 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/27 15:58:12 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon {

public:
	Weapon(void);
	~Weapon(void);

	Weapon(std::string);
	std::string getType(void);
	void setType(std::string);

	private:
		std::string type;

};

#endif
