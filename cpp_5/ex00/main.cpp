/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:57:15 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/21 16:09:32 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	int almost_highest_grade = 2;
	int almost_lowest_grade = 149;

	try
	{
		Bureaucrat first("first_bureaucrat", almost_highest_grade);
		Bureaucrat second("second_bureaucrat", almost_lowest_grade);
		std::cout << first.getName() << ", bureaucrat grade : " << first.getGrade() << '\n';
		std::cout << second.getName() << ", bureaucrat grade : " << second.getGrade() << '\n';

		std::cout << '\n';
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
