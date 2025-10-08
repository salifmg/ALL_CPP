/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:34:18 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/08 18:09:09 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_CPP
#define RPN_CPP
#include <iostream>
#include <sstream>
#include <string>
#include <stack>

class RPN
{
	public:
		RPN();
		~RPN();
		void Check_valitidy(std::string);
		void Calculate(char);
		void Take_while_numbers(std::string);

	private:
		std::stack <int>to_calculate;
		int nbr_spaces, nbr_values, nbr_operators;

};

#endif 

