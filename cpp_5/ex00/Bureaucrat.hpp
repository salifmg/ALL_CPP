/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:49 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/22 20:10:13 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP
#include "iostream"
#include "string"
#include <stdexcept>

class Bureaucrat {

	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat& FixedCpy);
		Bureaucrat& operator=(const Bureaucrat& FixedCpy);
		~Bureaucrat(void);
		
		Bureaucrat(std::string, int);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Exception for grade higher than 1 happened";
			}
		};
		
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Exception for lower than 150 happened";
			}
		};

		std::string getName();
		int getGrade();

		int increaseGrade();
		int decreaseGrade();

	private:
		const std::string name;
		int grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &ex);

#endif
