/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:11:28 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/22 18:51:28 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() { }

Base * generate(void) {

	std::srand(static_cast<unsigned int>(std::time(0)));
	int i = rand() % 3;
	
	if (i == 0)
		return (new A);
	else if (i == 1)
		return (new B);
	else
		return (new C);
}

int Point_to_A(Base* p)
{
	if (dynamic_cast<A*>(p))
		return (std::cout << "A" << std::endl, 0);
	return (1);
}

int Point_to_B(Base* p)
{
	if (dynamic_cast<B*>(p))	
		return (std::cout << "B" <<std::endl, 0);
	return (1);
}

int Point_to_C(Base* p)
{
	if (dynamic_cast<C*>(p))
		return (std::cout << "C" <<std::endl, 0);
	return (1);
}

void identify(Base* p) {

	int (*select_type[])(Base*) = {&Point_to_A, &Point_to_B, &Point_to_C};

	for (int i = 0 ; i < 3; i++)
	{
		if ((*select_type[i])(p) == 0)
			return;
	}
	std::cout << "ptr type neither a, b , or c" <<std::endl;
	return;
}

void identify(Base& p) {

	Base tmp;
	try {
		tmp = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		try {
			tmp = dynamic_cast<B&>(p);
			std::cout << "B" <<std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				tmp = dynamic_cast<C&>(p);
				std::cout << "C" <<std::endl;
			}
			catch(std::exception& e)
			{
				std::cout << "reference type neither a, b , or c" <<std::endl;
			}
		}
	}
	return;
}