/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:49 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/22 21:54:45 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
class Bureaucrat;

class ShrubberyCreationForm : public AForm {

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm& FixedCpy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& FixedCpy);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm(std::string name);
		void beSigned(Bureaucrat &selected_bur);
		void execute(Bureaucrat const &executor) const;
		
	private :
		std::string target;
};

#endif