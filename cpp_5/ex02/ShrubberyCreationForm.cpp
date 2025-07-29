/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:24 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/29 20:34:13 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() :AForm("noFormName", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) :AForm(name, 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
	return;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& FixedCpy)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& FixedCpy) {

	std::cout << "ShrubberyCreationForm Copy assignment operator called" << std::endl;
	return (*this);
}

void ShrubberyCreationForm::beSigned(Bureaucrat &selected_bur)
{
	if (selected_bur.getGrade() > 137)
		throw GradeTooLowException();
	else
		sign = true;
	if (grade_to_execute > selected_bur.getGrade())
	{
		std::string name_file;
		name_file = selected_bur.getName() + "_shrubbery";

		std::ofstream newFile(name_file.c_str());
		if (!newFile)
		{
			std::cerr << "Error creating new file\n";
			return;
		}

		//ecrit des tree dedans
		newFile.close();
	}
	return;
}