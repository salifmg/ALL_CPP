/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:34:18 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/03 14:47:55 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_CPP
#define RPN_CPP
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <utility>
#include <stack>

class RPN
{
	public:
		RPN();
		~RPN();
		int Check_valitidy(std::string );
		void Calculate(void);
		void Take_numbers_sign(std::string);


	private:
		std::stack <int>calculated;
		std::stack <std::string>left_to_calculate; //pop() pour retirer les elements qui partent dans calculated
};

#endif 


/*Nombre total d'opérateur = Nombre total de nombres - 1
Et
Nombre max d'opérateurs successifs = Nombre de nombres précédents - nombre d'opérateurs précédents - 1*/
//$> ./RPN "1 2 * 2 / 2 * 2 4 - +"