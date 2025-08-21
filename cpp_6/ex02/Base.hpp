/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:11:52 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/21 19:16:27 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <type_traits>

class A : public Base{};
class B : public Base{};
class C : public Base{};

class Base
{
	public:
		virtual ~Base();

	private:
	
};

Base * generate(void) {
	Base *tmp = NULL;
	
	if (rand() % 3 == 0)
	{
		A *A_instance;
		return (tmp = (Base *) A_instance);
	}
	else if (rand() % 3 == 1)
	{
		B *B_instance;
		return (tmp = (Base *) B_instance);
	}
	else
	{
		C *C_instance;
		return (tmp = (Base *) C_instance);
	}
}

void identify(Base* p) {
	if (std::is_same<p, A>::value == true)
	{
		
	std::cout << std::endl;

	}
	else if (std::is_same<p, B>::value == true)
	{

	std::cout << std::endl;

	}
	else if (std::is_same<p, C>::value == true)
	{

	std::cout << std::endl;

	}
}

void identify(Base& p) {
	std::cout << std::endl;

}

#endif