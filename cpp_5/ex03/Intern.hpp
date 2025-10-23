/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:28:48 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/23 20:03:34 by smagassa         ###   ########.fr       */
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

	public:
		Intern(void);
		Intern(const Intern& FixedCpy);
		Intern& operator=(const Intern& FixedCpy);
		~Intern();
		
		AForm* makeForm(std::string, std::string);

	private:
		class InvalidForm : public std::exception
		{
			public :
					InvalidForm(std::string invalid_name) : message("Enter a valid form name, not : " + invalid_name) {}
					virtual ~InvalidForm() throw() {}
					virtual const char* what() const throw()
					{
						return (message.c_str());
					}

			private:
					std::string message;
		};

};

#endif