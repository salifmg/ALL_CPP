/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:59:32 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/22 19:03:28 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

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

	private:
		const std::string name;
		bool sign;
		const int grade_to_sign;
		const int grade_to_execute;

};

std::ostream &operator<<(std::ostream &o, Form &ex);

#endif