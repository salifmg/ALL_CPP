/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:55 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/30 18:07:05 by smagassa         ###   ########.fr       */
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

	private :
		std::string target;

};

#endif