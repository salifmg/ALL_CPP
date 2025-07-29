/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:21 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/29 19:37:26 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	int highest_grade = 1;
	int lowest_grade = 150;
	int grade_to_sign = 1;
	int grade_to_execute = 1;

	try
	{
		Bureaucrat first("first_bureaucrat", highest_grade);
		Bureaucrat second("second_bureaucrat", lowest_grade);

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