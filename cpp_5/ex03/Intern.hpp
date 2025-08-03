/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:28:48 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/03 18:54:53 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CPP
#define INTERN_CPP
#include "AForm.hpp"

class AForm;

class Intern
{

public:
	Intern(void);
	Intern(const Intern& FixedCpy);
	Intern& operator=(const Intern& FixedCpy);
	~Intern();
	Aform* makeForm(std::string, std::string);

private:
	/* data */
};




#endif