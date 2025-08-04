/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:37 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/04 19:54:19 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default Name"), grade(42)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) :name(name), grade(grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;

	if (this->grade > 150)
		throw GradeTooLowException();
	else if (this->grade <= 0)
		throw GradeTooHighException();
	return;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
	return;
}
Bureaucrat::Bureaucrat(const Bureaucrat& FixedCpy) :name(FixedCpy.name), grade(FixedCpy.grade)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	return;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& FixedCpy) {

	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	this->grade = FixedCpy.grade;
	return (*this);
}

std::string Bureaucrat::getName()
{
	return(this->name);
}

int Bureaucrat::getGrade()
{
	return(this->grade);
}

int Bureaucrat::increaseGrade()
{
	return(--this->grade);
}

int Bureaucrat::decreaseGrade()
{
	return(++this->grade);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat &ex)
{
    o << ex.getName();
    return (o);
}

void Bureaucrat::signForm(AForm &form, Bureaucrat &selected_bur)
{
	try
	{
		form.beSigned(selected_bur);
		std::cout << selected_bur << " signed " << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << selected_bur << " couldn’t sign " << form << " because " << e.what() << '\n';
	}
	
	return;
}