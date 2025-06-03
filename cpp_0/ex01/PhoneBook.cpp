/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:23:36 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/03 18:36:05 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){

	std::cout << "PLEASE SELECT A TASK BETWEEN : 'ADD', 'SEARCH' AND 'EXIT'" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void){

	std::cout << "DELETING ALL INFORMATIONS SAVED" << std::endl;
	return;
}

int	PhoneBook::compare(char *task)const{

	// char *ADD = "ADD";
	// char *SEARCH = "SEARCH";
	// char *EXIT = "EXIT";

	// if (task == ADD)
	// 	return (1);
	// else if (task == SEARCH)
	// 	return (2);
	// else if (task == EXIT)
	// 	return (3);
	return (4);
}
