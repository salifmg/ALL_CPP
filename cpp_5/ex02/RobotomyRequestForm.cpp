/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:33 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/22 21:58:47 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :AForm("noFormName", 72, 45), target("noTargetName")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) :AForm(name, 72, 45), target(name)
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
	this->target = FixedCpy.target;
	return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& FixedCpy) {

	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	this->target = FixedCpy.target;
	return (*this);
}

void RobotomyRequestForm::beSigned(Bureaucrat &selected_bur)
{
	if (selected_bur.getGrade() > grade_to_sign)
		throw NotGoodGradeToSign(grade_to_sign);
	else
		sign = true;
	return;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (sign != 1)
		throw FormNotSigned();
	if (executor.getGrade() > grade_to_execute)
		throw NotGoodGradeToSign(grade_to_sign);

	std::cout << "Bzzt... Bzzt... Bzzt..." << std::endl;
	if (rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "The robotomy has failed" << std::endl;
}
