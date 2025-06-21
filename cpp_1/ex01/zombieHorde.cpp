/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:00:23 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/21 18:28:57 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){

	int i = 0;

	if (N <= 0)
		return (NULL);
	Zombie* NewZ = new Zombie[N];
	while (N > i)
		NewZ[i++].getZombie(name);
	return (NewZ);
}
