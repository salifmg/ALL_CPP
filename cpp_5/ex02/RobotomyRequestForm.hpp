/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:51 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/29 19:41:51 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm& FixedCpy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& FixedCpy);
		~RobotomyRequestForm(void);

		RobotomyRequestForm(std::string name);
		void beSigned(Bureaucrat &selected_bur);

	private :

};

#endif