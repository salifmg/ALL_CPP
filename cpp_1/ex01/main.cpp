/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:16:12 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/21 17:32:32 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void annoncement(int Nbr, Zombie *StaticStack)
{
	int i = 0;
	while (Nbr != i)
	{
		StaticStack->announce();
		StaticStack++;
		i++;
	}
}

int main(void)
{
	Zombie *StaticStack;
	int Nbr = 15;

	StaticStack = zombieHorde(Nbr, "FIRST");
	if (StaticStack == NULL)
		return (std::cout << "SELECT A CORRECT NUMBER OF ZOMBIES TO CREATE" << std::endl, 0);
	annoncement(Nbr, StaticStack);
	delete [] StaticStack;
	return (0);
}
