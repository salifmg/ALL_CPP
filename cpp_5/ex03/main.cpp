/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:21 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/23 20:03:45 by smagassa         ###   ########.fr       */
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
		first.signForm(*scf);
		first.executeForm(*scf);
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
		first.signForm(*rrf);
		first.executeForm(*rrf);
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
		first.signForm(*ppf);
		first.executeForm(*ppf);
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
		first.signForm(*test);
		first.executeForm(*test);//wont go in since makeForm will throw
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
		second.signForm(*test2); //grade too low
		second.executeForm(*test2); //not signed
		delete(test2);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0) ;
}