/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:57:15 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/22 18:52:55 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	int almost_highest_grade = 2;
	int almost_lowest_grade = 149;
	int grade_to_sign = 1;
	int grade_to_execute = 1;

	try
	{
		Bureaucrat first("first_bureaucrat", almost_highest_grade);
		Bureaucrat second("second_bureaucrat", almost_lowest_grade);
		std::cout << first.getName() << ", bureaucrat grade : " << first.getGrade() << '\n';
		std::cout << second.getName() << ", bureaucrat grade : " << second.getGrade() << '\n';

		first.increaseGrade();
		std::cout << first << ", bureaucrat grade : " << first.getGrade() << '\n';
		second.decreaseGrade();
		std::cout << second << ", bureaucrat grade : " << second.getGrade() << '\n';
		
		
		std::cout << std::endl;
		Form first_form;
		Form second_form("form_impossible", grade_to_sign, grade_to_execute);
		first.signForm(first_form);
		std::cout << std::endl;
		second.signForm(second_form);

	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0) ;
}

		