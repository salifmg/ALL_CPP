/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:23:36 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/08 20:48:36 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){

	return;
}

PhoneBook::~PhoneBook(void){

	std::cout << "" << std::endl;
	std::cout << "DELETING ALL INFORMATIONS SAVED" << std::endl;
	return;
}

void PhoneBook::new_contact(){
	
	if (new_ctact_pos != 8)
	{
		all_contacts[new_ctact_pos].add_contact();
		new_ctact_pos++;
	}
	else
	{
		std::cout << "LIMIT OF 8 CONTACTS REACHED, OVERWRITING THE OLDEST ONES" << std::endl;
		new_ctact_pos = 0;
		all_contacts[new_ctact_pos].add_contact();
	}
	return ;
}

void PhoneBook::search(){

	int i = -1;
	std::string	index;
	int index_converted = 0;

	while (++i != new_ctact_pos)
		all_contacts[i].display_contact(i + 1);
	while (1)
	{
		std::cout << "ENTER INDEX OF DESIRED CONTACT : ";
		std::getline(std::cin, index);
		if (std::cin.eof())
            return ;
		if (index.empty())
		{
			std::cout << "PLEASE INPUT AN VALID INDEX" << std::endl;
			continue;
		}
		index_converted	= atoi(index.c_str()) - 1;
		if (index_converted >= 0 && index_converted <= 8)
		{
			if (all_contacts[index_converted].display_contact(index_converted + 1) == 1)
				continue;
		}
		else
		{
			std::cout << "THE INDEX BE NEGATIVE NOR, INVALID\n" << std::endl;
			continue;
		}
		break;
	}
	return;
}
//affichage tableau
