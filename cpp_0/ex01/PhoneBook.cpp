/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:23:36 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/07 20:46:28 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void){

	return;
}

PhoneBook::~PhoneBook(void){

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
		new_ctact_pos = 0;
		all_contacts[new_ctact_pos].add_contact();
	}
	return ;
}

//comprendre cmt fonctione le tableau des contacts unite
//affichage tableau