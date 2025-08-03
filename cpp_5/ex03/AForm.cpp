/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:59:30 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/28 18:39:31 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :name("NoName"), sign(false), grade_to_sign(150), grade_to_execute(150)
{
	std::cout << "AForm default constructor called" << std::endl;
	return;
}

AForm::AForm(std::string name, int to_sign, int to_execute) :name(name), sign(false), grade_to_sign(to_sign), grade_to_execute(to_execute)
{
	std::cout << "AForm constructor called" << std::endl;
	return;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
	return;
}

AForm::AForm(const AForm& FixedCpy) :sign(FixedCpy.sign), grade_to_sign(FixedCpy.grade_to_sign), grade_to_execute(FixedCpy.grade_to_execute)
{
	std::cout << "AForm copy constructor called" << std::endl;
	return;
}

AForm& AForm::operator=(const AForm& FixedCpy) {

	std::cout << "AForm Copy assignment operator called" << std::endl;
	this->sign = FixedCpy.sign;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, AForm &ex)
{
    o << ex.getName();
    return (o);
}

std::string AForm::getName()
{
	return(this->name);
}

void AForm::beSigned(Bureaucrat &selected_bur)
{
	if (selected_bur.getGrade() > grade_to_sign)
		throw GradeTooLowException();
	else
		sign = true; 
	return;
}
