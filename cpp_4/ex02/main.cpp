/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:11 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/17 16:34:41 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	

	std::cout << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();

	std::cout << meta2->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); //will output the wrong AAnimal!
	meta2->makeSound();

	std::cout << std::endl;
	delete i;
	delete j;
	delete i2;
	delete meta2;
	return 0;

}
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;

	// std::cout << std::endl;
	// Animal* AnimalTab[2];
	// for(int i=0; i < 2; i++)
	// {
	// 	if (i < 1)
	// 		AnimalTab[i] = new Dog();
	// 	else
	// 		AnimalTab[i] = new Cat();
	// }
	// for (int i = 0; i < 2; i++)
    // 	delete AnimalTab[i];

	// std::cout << std::endl;
	//    Cat a;
    // {
    //     Cat tpm = a;
    // }
	// return 0;