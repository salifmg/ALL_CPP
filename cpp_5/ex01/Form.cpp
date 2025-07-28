/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:59:30 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/28 18:39:31 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :name("NoName"), sign(false), grade_to_sign(150), grade_to_execute(150)
{
	std::cout << "Form default constructor called" << std::endl;
	return;
}

Form::Form(std::string name, int to_sign, int to_execute) :name(name), sign(false), grade_to_sign(to_sign), grade_to_execute(to_execute)
{
	std::cout << "Form constructor called" << std::endl;
	return;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
	return;
}

Form::Form(const Form& FixedCpy) :sign(FixedCpy.sign), grade_to_sign(FixedCpy.grade_to_sign), grade_to_execute(FixedCpy.grade_to_execute)
{
	std::cout << "Form copy constructor called" << std::endl;
	return;
}

Form& Form::operator=(const Form& FixedCpy) {

	std::cout << "Form Copy assignment operator called" << std::endl;
	this->sign = FixedCpy.sign;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Form &ex)
{
    o << ex.getName();
    return (o);
}

std::string Form::getName()
{
	return(this->name);
}

void Form::beSigned(Bureaucrat &selected_bur)
{
	if (selected_bur.getGrade() > grade_to_sign)
		throw GradeTooLowException();
	else
		sign = true; 
	return;
}
