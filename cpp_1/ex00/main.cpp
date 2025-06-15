/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:16:12 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/15 21:05:59 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *DynamicHeap;

	DynamicHeap = newZombie("FIRST");
	DynamicHeap->announce();
	randomChump("SECOND");
	delete(DynamicHeap);
	return (0);
}
