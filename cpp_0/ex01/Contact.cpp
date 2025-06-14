/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:11:34 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/14 17:58:59 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip> 

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

void Contact::display_contact_list(int index){

	std::string FIRSTNAME_CROPPED = this->FirstName;
	std::string LASTNAME_CROPPED = this->LastName;
	std::string NICKNAME_CROPPED = this->NickName;
	std::string PHONENUMBER_CROPPED = this->PhoneNumber;
	if (FIRSTNAME_CROPPED.length() > 10)
	{
		FIRSTNAME_CROPPED.resize(9);
		FIRSTNAME_CROPPED += '.';
	}
	if (LASTNAME_CROPPED.length() > 10)
	{
		LASTNAME_CROPPED.resize(9);
		LASTNAME_CROPPED += '.';
	}
	if (NICKNAME_CROPPED.length() > 10)
	{
		NICKNAME_CROPPED.resize(9);
		NICKNAME_CROPPED += '.';
	}
	if (PHONENUMBER_CROPPED.length() > 10)
	{
		PHONENUMBER_CROPPED.resize(9);
		PHONENUMBER_CROPPED += '.';
	}
	std::cout << std::setfill ('-') << std::setw (45) << "" << std::endl;
	std::cout	<< "|"
				<< std::setw(10) << std::setfill(' ') << std::right << "FIRSTNAME" << "|"
				<< std::setw(10) << std::setfill(' ') << std::right << "LASTNAME" << "|"
				<< std::setw(10) << std::setfill(' ') << std::right << "NICKNAME" << "|"
				<< std::setw(10) << std::setfill(' ') << std::right << "PHONE NMBR" << "|"
				<< std::endl;
	std::cout << std::setfill ('-') << std::setw (45) << "" << std::endl;
	std::cout	<< "|"
				<< std::setw(10) << std::setfill(' ') << std::right << FIRSTNAME_CROPPED << "|"
				<< std::setw(10) << std::setfill(' ') << std::right << LASTNAME_CROPPED << "|"
				<< std::setw(10) << std::setfill(' ') << std::right << NICKNAME_CROPPED << "|"
				<< std::setw(10) << std::setfill(' ') << std::right << PHONENUMBER_CROPPED << "|"
				<< std::endl;
	std::cout << std::setfill ('-') << std::setw (45) << "" << std::endl;
	return ;
}

int Contact::display_full_contact(int index){

	if (this->FirstName.empty())
	{
		std::cout << "PLEASE INPUT AN VALID INDEX" << std::endl;
		return (1);
	}
	std::cout << "\nFIRSTNAME : " << this->FirstName << std::endl;
	std::cout << "LASTNAME : " << this->LastName << std::endl;
	std::cout << "NICKNAME : " << this->NickName << std::endl;
	std::cout << "PHONE NUMBER : " << this->PhoneNumber << std::endl;
	std::cout << "DARKEST SECRET : " << this->DarkestSecret << std::endl << std::endl;
	return (0);
}
