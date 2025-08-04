/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:28:48 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/04 18:30:41 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CPP
#define INTERN_CPP
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern
{

	class InvalidForm : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Enter a valid form name";
		}
	};

	public:
		Intern(void);
		Intern(const Intern& FixedCpy);
		Intern& operator=(const Intern& FixedCpy);
		~Intern();
		AForm* makeForm(std::string, std::string);

};

#endif