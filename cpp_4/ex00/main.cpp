/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:11 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/15 21:16:21 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	

	std::cout << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();

	std::cout << meta2->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); //will output the wrong animal!
	meta2->makeSound();

	delete i;
	delete j;
	delete meta;
	delete i2;
	delete meta2;
	return 0;
}

