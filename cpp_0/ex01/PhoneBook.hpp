/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:23:39 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/21 15:39:04 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <string>
#include <cstdlib> 
#include "Contact.hpp"

class PhoneBook {

public:
		PhoneBook(void);
		~PhoneBook(void);
		void	new_contact();
		void	search();
		
	private:
		Contact all_contacts[8];
		int		new_ctact_pos;
		int		total_ctact;
		
};

#endif
