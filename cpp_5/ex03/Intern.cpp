/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:28:46 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/04 18:54:30 by smagassa         ###   ########.fr       */
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
	(void)FixedCpy;
	std::cout << "Intern Copy constructor called" << std::endl;
	return;
}

Intern& Intern::operator=(const Intern& FixedCpy) {

	(void)FixedCpy;
	std::cout << "Intern Copy assignment operator called" << std::endl;
	return (*this);
}

AForm* Intern::makeForm(std::string name_form, std::string target_form)
{
	const char* all_forms[] = { "shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0 ; i < 3; i++)
	{
		if (name_form == all_forms[i])
		{
			std::cout << "Intern creates " << name_form << std::endl;
			switch (i)
			{
				case 0:
					return (new ShrubberyCreationForm(target_form));
				case 1:
					return (new RobotomyRequestForm(target_form));
				case 2:
					return (new PresidentialPardonForm(target_form));
			}
		} 
	}
	throw InvalidForm();
}
