/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:11:34 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/08 20:45:55 by smagassa         ###   ########.fr       */
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
		std::getline(std::cin, this->FirstName);
		if (std::cin.eof())
            return ;
		std::cout << "ENTER THE CONTACTS LASTNAME : " ;
		std::getline(std::cin, this->LastName);
		if (std::cin.eof())
            return ;
		std::cout << "ENTER THE CONTACTS NICKNAME : " ;
		std::getline(std::cin, this->NickName);
		if (std::cin.eof())
            return ;
		std::cout << "ENTER THE CONTACTS PHONE NUMBER : " ;
		std::getline(std::cin, this->PhoneNumber);
		if (std::cin.eof())
            return ;
		std::cout << "ENTER THE CONTACTS DARKEST SECRET : " ;
		std::getline(std::cin, this->DarkestSecret);
		if (std::cin.eof())
            return ;
		if (this->FirstName.empty() || this->LastName.empty() || this->NickName.empty() || this->PhoneNumber.empty() || this->DarkestSecret.empty())
			std::cout << "NO ENTRIES SHOULD BE EMPTY, RETRY\n" << std::endl;
		else
		{
			std::cout << "ADDED THE NEW CONTACT\n" << std::endl;
			break;
		}
	}
		return ;
}

int Contact::display_contact(int index){

	if (this->FirstName.empty())
	{
		std::cout << "PLEASE INPUT AN VALID INDEX" << std::endl;
		return (1);
	}
	std::cout << "FIRSTNAME : " << this->FirstName << std::endl;
	std::cout << "LASTNAME : " << this->LastName << std::endl;
	std::cout << "NICKNAME : " << this->NickName << std::endl;
	std::cout << "PHONE NUMBER : " << this->PhoneNumber << std::endl;
	std::cout << "DARKEST SECRET : " << this->DarkestSecret << std::endl;
	std::cout << "" << std::endl;
	return (0);
}

//LUI GET LES BAILS EN PV