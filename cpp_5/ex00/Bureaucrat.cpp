/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:37 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/04 19:54:36 by smagassa         ###   ########.fr       */
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
		throw GradeTooHighException();
	else if (this->grade <= 0)
		throw GradeTooLowException();
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
    o << ex.getName() << ", bureaucrat grade : " << ex.getGrade();
    return (o);
}