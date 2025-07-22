/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:11 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/21 19:02:22 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	int nbr = 2;

	std::cout << std::endl;
	Animal* AnimalTab[nbr];
	for(int i=0; i < nbr; i++)
	{
		if (i < nbr / 2)
			AnimalTab[i] = new Dog();
		else
			AnimalTab[i] = new Cat();
	}
	for (int i = 0; i < nbr; i++)
    	delete AnimalTab[i];

	std::cout << std::endl;
	   Cat a;
    {
        Cat tpm = a;
    }
	return 0;
}

