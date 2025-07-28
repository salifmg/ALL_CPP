/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:57:15 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/26 19:54:09 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	int highest_grade = 1;
	int lowest_grade = 150;

	try
	{
		Bureaucrat first("first_bureaucrat", highest_grade);
		Bureaucrat second("second_bureaucrat", lowest_grade);
		std::cout << first.getName() << ", bureaucrat grade : " << first.getGrade() << '\n';
		std::cout << second.getName() << ", bureaucrat grade : " << second.getGrade() << '\n';

		first.increaseGrade();
		std::cout << first << '\n';
		second.decreaseGrade();
		std::cout << second << '\n';
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0) ;
}
