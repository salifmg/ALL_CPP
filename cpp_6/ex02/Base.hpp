/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:11:52 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/22 18:55:46 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Base
{
	public:
		virtual ~Base();

	private:
	
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void);

int Point_to_A(Base* p);
int Point_to_B(Base* p);
int Point_to_C(Base* p);

void identify(Base* p);

void identify(Base& p);

#endif