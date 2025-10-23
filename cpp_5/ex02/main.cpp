/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:21 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/23 18:45:00 by smagassa         ###   ########.fr       */
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
		first.signForm(first_shrubbery_form);
		first.executeForm(first_shrubbery_form);//can
		first.executeForm(scnd_shrubbery_form);//cant because isnt signed
		second.signForm(scnd_shrubbery_form); //cant sign since grade is too low
		second.executeForm(first_shrubbery_form);//cant


		std::cout << std::endl;
		RobotomyRequestForm first_robot_form;
		RobotomyRequestForm scnd_robot_form;
		first.signForm(first_robot_form);
		first.executeForm(first_robot_form);//can
		second.signForm(scnd_robot_form);
		second.executeForm(scnd_robot_form);//cant beceause not signed


		std::cout << std::endl;
		PresidentialPardonForm first_presi_form;
		PresidentialPardonForm scnd_presi_form("a form");
		first.signForm(first_presi_form);
		first.executeForm(first_presi_form);//can
		second.signForm(first_presi_form);
		second.executeForm(first_presi_form);//cant

		std::cout << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0) ;
}