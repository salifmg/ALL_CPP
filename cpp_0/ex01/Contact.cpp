/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:11:34 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/07 20:46:32 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){

	return;
}

Contact::~Contact(void){

	return;
}

void Contact::add_contact(){

	while (1)
	{
		std::cout << "ENTER THE CONTACTS FIRSTNAME : " ;
		if (!(std::getline(std::cin ,this->FirstName)));
			return ;
		std::cout << "ENTER THE CONTACTS LASTNAME : " ;
		if (!(std::getline(std::cin ,this->LastName)));
			return ;
		std::cout << "ENTER THE CONTACTS NICKNAME : " ;
		if (!(std::getline(std::cin ,this->NickName)));
			return ;
		std::cout << "ENTER THE CONTACTS PHONE NUMBER : " ;
		if (!(std::getline(std::cin ,this->PhoneNumber)));
			return ;
		std::cout << "ENTER THE CONTACTS DARKEST SECRET : " ;
		if (!(std::getline(std::cin ,this->DarkestSecret)));
			return ;
		if (this->FirstName.empty() || this->LastName.empty() || this->NickName.empty() || this->PhoneNumber.empty() || this->DarkestSecret.empty())
			std::cout << "NO ENTRIES SHOULD BE EMPTY, RETRY" << std::endl;
		else
			break;
	}
		return ;
}
//REAGIT SI CTRL+D