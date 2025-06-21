/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:16:12 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/21 18:18:39 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void annoncement(int Nbr, Zombie *DynamicHeap)
{
	int i = 0;
	while (Nbr != i)
	{
		DynamicHeap->announce();
		DynamicHeap++;
		i++;
	}
}

int main(void)
{
	Zombie *DynamicHeap;
	int Nbr = 15;

	DynamicHeap = zombieHorde(Nbr, "FIRST");
	if (DynamicHeap == NULL)
		return (std::cout << "SELECT A CORRECT NUMBER OF ZOMBIES TO CREATE" << std::endl, 0);
	annoncement(Nbr, DynamicHeap);
	delete [] DynamicHeap;
	return (0);
}
