/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:57:15 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/28 18:47:36 by smagassa         ###   ########.fr       */
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
		std::cout << first.getName() << ", bureaucrat grade : " << first.getGrade() << '\n';
		std::cout << second.getName() << ", bureaucrat grade : " << second.getGrade() << '\n';

		first.increaseGrade();
		std::cout << first << ", bureaucrat grade : " << first.getGrade() << '\n';
		second.decreaseGrade();
		std::cout << second << ", bureaucrat grade : " << second.getGrade() << '\n';
		
		
		std::cout << std::endl;
		Form first_form;
		Form second_form("form_impossible", grade_to_sign, grade_to_execute);
		first.signForm(first_form, first);
		second.signForm(second_form, second);

	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0) ;
}

		