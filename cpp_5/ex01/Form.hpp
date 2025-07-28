/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:59:32 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/28 19:04:20 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "iostream"
#include "string"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:
		Form(void);
		Form(const Form& FixedCpy);
		Form& operator=(const Form& FixedCpy);
		~Form(void);

		Form(std::string, int, int);
		void beSigned(Bureaucrat &selected_bur);
		std::string getName();
		
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Exception for grade lower than 150";
			}
		};

	private:
		const std::string name;
		bool sign;
		const int grade_to_sign;
		const int grade_to_execute;

};

std::ostream &operator<<(std::ostream &o, Form &ex);

#endif