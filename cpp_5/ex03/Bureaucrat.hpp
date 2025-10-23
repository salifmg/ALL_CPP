/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:58:49 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/23 19:08:32 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP
#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include "AForm.hpp"

class AForm;

class Bureaucrat {

	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat& FixedCpy);
		Bureaucrat& operator=(const Bureaucrat& FixedCpy);
		~Bureaucrat(void);
		
		Bureaucrat(std::string, int);
		void executeForm(AForm const & form) const;

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

		std::string getName() const;
		int getGrade() const;

		void increaseGrade();
		void decreaseGrade();

		void signForm(AForm &form);

	private:
		const std::string name;
		int grade;
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &ex);

#endif
