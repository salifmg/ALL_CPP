/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:11 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/16 18:44:07 by smagassa         ###   ########.fr       */
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

	std::cout << std::endl;
	Animal* AnimalTab[2];
	for(int i=0; i < 2; i++)
	{
		if (i < 1)
			AnimalTab[i] = new Dog();
		else
			AnimalTab[i] = new Cat();
	}
	for (int i = 0; i < 2; i++)
    	delete AnimalTab[i];
	//    Cat a;
    // {
    //     Cat tpm = a;
    // }
	return 0;
}

