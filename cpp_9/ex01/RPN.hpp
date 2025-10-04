/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:34:18 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/04 18:46:31 by smagassa         ###   ########.fr       */
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

template <typename T>
class RPN : public std::stack<T>
{
	public:
		RPN();
		~RPN();
		void Check_valitidy(std::string);
		void Calculate(void);
		void Take_numbers_sign(std::string);
		void Valid_chain();

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		
        iterator    begin(void) { return (this->c.begin());}
        iterator    end(void) {return (this->c.end());}

		iterator    rbegin(void) { return (this->c.begin());}
        iterator    rend(void) {return (this->c.end());}

	private:
		std::stack <int>calculated;
		std::stack <std::string>left_to_calculate; //pop() pour retirer les elements qui partent dans calculated
		iterator it, it2, tmp_it;
		int nbr_spaces, nbr_values, nbr_operators, operators_chain;

};

#endif 


/*Nombre total d'opérateur = Nombre total de nombres - 1
Nombre max d'opérateurs successifs = Nombre de nombres précédents - nombre d'opérateurs précédents - 1*/

//$> ./RPN "1 2 * 2 / 2 * 2 4 - +"
// 42

// $> ./RPN "7 7 * 7 -"
// 42

// $> ./RPN "1 2 * 2 / 2 * 2 4 - +"
// 0

//utilise iterator mais tu ne va pas retirer de ton container, juste skip enft