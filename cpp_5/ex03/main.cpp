/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:21 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/30 19:18:43 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::srand(std::time(0));
	int highest_grade = 1;
	int lowest_grade = 150;

	try
	{
		Bureaucrat first("first_bureaucrat", highest_grade);
		Bureaucrat second("second_bureaucrat", lowest_grade);

		std::cout << std::endl;
		ShrubberyCreationForm first_shrubbery_form;
		ShrubberyCreationForm scnd_shrubbery_form;
		first.signForm(first_shrubbery_form, first);
		second.signForm(scnd_shrubbery_form, second);

		std::cout << std::endl;
		RobotomyRequestForm first_robot_form;
		RobotomyRequestForm scnd_robot_form;
		first.signForm(first_robot_form, first);
		second.signForm(scnd_robot_form, second);

		std::cout << std::endl;
		PresidentialPardonForm first_presi_form;
		PresidentialPardonForm scnd_presi_form("a form");
		first.signForm(first_presi_form, first);
		second.signForm(first_presi_form, second);
		std::cout << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0) ;
}