/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:59:32 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/22 21:55:07 by smagassa         ###   ########.fr       */
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
		std::string getName() const;
		virtual void execute( const Bureaucrat& executor ) const = 0;

		class NotGoodGradeToSign : public std::exception
		{
			public :
					NotGoodGradeToSign(const int grade_max)
					{
						std::stringstream ss;
						ss << grade_max;
						message = "Exception for grade lower than " + ss.str();
					}
					virtual ~NotGoodGradeToSign() throw() {}
					virtual const char* what() const throw()
					{
						return (message.c_str());
					}
			
			private:
					std::string message;
		};

		class FormNotSigned : public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Exception for trying to execute form witouth signing it";
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