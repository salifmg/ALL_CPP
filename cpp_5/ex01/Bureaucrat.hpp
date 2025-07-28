/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:49 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/28 18:48:13 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP
#include "iostream"
#include "string"
#include <stdexcept>
#include "Form.hpp"

class Form;

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
				return "Exception for grade higher than 1";
			}
		};
		
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Exception for grade lower than 150";
			}
		};

		std::string getName();
		int getGrade();

		int increaseGrade();
		int decreaseGrade();

		void signForm(Form &form, Bureaucrat &selected_bur);

	private:
		const std::string name;
		int grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat &ex);

#endif
