/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:33 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/29 20:19:52 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() :AForm("noFormName", 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) :AForm(name, 72, 45)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
	return;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& FixedCpy)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& FixedCpy) {

	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	return (*this);
}

void RobotomyRequestForm::beSigned(Bureaucrat &selected_bur)
{
	if (selected_bur.getGrade() > grade_to_sign)
		throw GradeTooLowException();
	else
		sign = true;
	if (grade_to_execute > selected_bur.getGrade())
	{
		std::cout << "Bzzt... Bzzt... Bzzt..." << std::endl;
		if (rand() % 2)
			std::cout << selected_bur << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "The robotomy has failed" << std::endl;
	}
	return;
}
