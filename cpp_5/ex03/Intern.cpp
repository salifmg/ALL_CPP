/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:28:46 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/03 19:08:21 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
	return;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
	return;
}

Intern::Intern(const Intern& FixedCpy)
{
	std::cout << "Intern Copy constructor called" << std::endl;
	return;
}

Intern& Intern::operator=(const Intern& FixedCpy) {

	std::cout << "Intern Copy assignment operator called" << std::endl;
	return (*this);
}

Aform* Intern::makeForm(std::string name_form, std::string target_form)
{

	return (/*objet cree*/);
}
