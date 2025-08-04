/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:21 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/04 19:48:19 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	std::srand(std::time(0));
	int highest_grade = 1;
	int lowest_grade = 150;

	Bureaucrat first("first_bureaucrat", highest_grade);
	Bureaucrat second("second_bureaucrat", lowest_grade);
	Intern someRandomIntern;
	std::cout << std::endl;


	try
	{
		AForm* scf;
		scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		first.signForm(*scf, first);
		delete(scf);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	try
	{
		std::cout << std::endl;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		first.signForm(*rrf, first);
		delete(rrf);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	
		try
	{
		std::cout << std::endl;
		AForm* ppf;
		ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
		first.signForm(*ppf, first);
		delete(ppf);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


		try
	{
		std::cout << std::endl;
		AForm* test;
		test = someRandomIntern.makeForm("predon!", "Bender");
		first.signForm(*test, first);
		delete(test);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	try
	{
		std::cout << std::endl;
		AForm* test2;
		test2 = someRandomIntern.makeForm("robotomy request", "Bender");
		second.signForm(*test2, second);
		delete(test2);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0) ;
}