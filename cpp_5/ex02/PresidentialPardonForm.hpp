/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:55 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/22 21:54:45 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
class Bureaucrat;

class PresidentialPardonForm : public AForm {

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm& FixedCpy);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& FixedCpy);
		~PresidentialPardonForm(void);

		PresidentialPardonForm(std::string name);
		void beSigned(Bureaucrat &selected_bur);
		void execute(Bureaucrat const &executor) const;
		
	private :
		std::string target;

};

#endif