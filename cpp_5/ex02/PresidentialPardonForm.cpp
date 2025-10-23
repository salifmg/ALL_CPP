/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:37 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/22 21:58:09 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :AForm("noFormName", 25, 5), target("noTargetName")
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) :AForm(name, 25, 5), target(name)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& FixedCpy)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	this->target = FixedCpy.target;
	return;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& FixedCpy) {

	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	this->target = FixedCpy.target;
	return (*this);
}

void PresidentialPardonForm::beSigned(Bureaucrat &selected_bur)
{
	if (selected_bur.getGrade() > grade_to_sign)
		throw NotGoodGradeToSign(grade_to_sign);
	else
		sign = true;
	return;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (sign != 1)
		throw FormNotSigned();
	if (executor.getGrade() > grade_to_execute)
		throw NotGoodGradeToSign(grade_to_sign);

	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}