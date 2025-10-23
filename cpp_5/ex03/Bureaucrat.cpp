/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:37 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/23 19:08:25 by smagassa         ###   ########.fr       */
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

std::string Bureaucrat::getName() const
{
	return(this->name);
}

int Bureaucrat::getGrade() const
{
	return(this->grade);
}

void Bureaucrat::increaseGrade()
{
	if (grade -1 < 0)
		throw GradeTooLowException();
	else 
		--grade;
}

void Bureaucrat::decreaseGrade()
{
	if (grade +1 > 150)
		throw GradeTooHighException();
	else 
		++grade;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &ex)
{
    o << ex.getName();
    return (o);
}

void Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << *this << " couldn’t sign " << form << " because " << e.what() << '\n';
	}
	
	return;
}

void Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
		form.execute(*this);
		std::cout << *this << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}