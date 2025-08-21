/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:59:32 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/13 15:13:53 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	public:
		AForm(void);
		AForm(const AForm& FixedCpy);
		AForm& operator=(const AForm& FixedCpy);
		virtual ~AForm(void);

		AForm(std::string, int, int);
		virtual void beSigned(Bureaucrat &selected_bur) = 0;
		std::string getName();
		
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Exception for grade lower than 150";
			}
		};

	protected:
		const std::string name;
		bool sign;
		const int grade_to_sign;
		const int grade_to_execute;

};

std::ostream &operator<<(std::ostream &o, AForm &ex);

#endif