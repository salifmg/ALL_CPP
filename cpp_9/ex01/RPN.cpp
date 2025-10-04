/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:34:20 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/04 18:59:16 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

template <typename T>
RPN<T>::RPN() {}

template <typename T>
RPN<T>::~RPN() {}

int Is_number(char str)
{
	if (str >= 0 && str <= 9)
		return (0);
	return 1;
}

int Is_space(char str)
{
	if (str == ' ')
		return (0);
	return 1;
}

int Is_sign(char str)
{
	if (str == '+' || str == '-' || str == '*' || str == '/')
		return (0);
	return 1;
}

int Test_string(char str)
{
	if (Is_number(str) || Is_space(str) || Is_sign(str))
		return (0);
	else
		return (1);
}

template <typename T>
void RPN<T>::Check_valitidy(std::string str){ 


	//other method => if (str.find_first_not_of("0123456789+-*/ ") != std::string::npos)
	for (int i = 0; str[i] != '\0'; ++i) //if not between 0-9 and not equal ' ' or +-*/ error
		if (Test_string(str[i]) == 1)
			throw("Error1");

	nbr_spaces = 0, nbr_values = 0, nbr_operators = 0, operators_chain = 0;
	for (int i = 0; str[i] != '\0'; ++i) //take nbr of spaces, and values/operators
	{
		if (str[i] == ' ')
			nbr_spaces++;
		else if (Is_number(str[i]))
			nbr_values++;
		else
			nbr_operators++;
	}
	if ((nbr_values + nbr_operators) != nbr_spaces - 1) //to much spaces
		throw("Error2");
	if (nbr_operators != nbr_values - 1) //nbr of operators isnt equal to nbr of nmbrs - 1
		throw("Error3");

	Take_numbers_sign(str);// all into container

	it = left_to_calculate.begin();
	it2 = left_to_calculate.end();
	
	//ptetre pas necessaire
	if (Is_number(it) == 1) //test first data isnt a number
		throw("Error4");
	if (Is_sign(it2) == 1) // test last data isnt an operator
		throw("Error5");

	while (it != it2)
	{
		if (Is_sign(it))
			operators_chain++;
		else
		{
			if (operators_chain >= 1)
				Valid_chain(); //valid order for operators and values
			operators_chain = 0;
		}
		++it;
	}
	if (operators_chain > 0)
		Valid_chain();
}

template <typename T>
void RPN<T>::Valid_chain()
{
	--it; //ptetre que en haut pas ici
	nbr_values = 0, nbr_operators = 0;
	for (tmp_it = left_to_calculate.begin(); tmp_it != it; ++tmp_it)
	{
		if (Is_number(tmp_it))
			nbr_values++;
		else
			nbr_operators++;
	}
	nbr_operators-= operators_chain;
	if (operators_chain != (nbr_values - nbr_operators)- 1)
		throw("Error6");
}

template <typename T>
void RPN<T>::Take_numbers_sign(std::string str)
{
	std::string tmp;
	std::stringstream ss(str);

	while (ss >> tmp)
	{
		if (tmp.size() != 1 || ss.fail()) //ptetre pas ss fail
			throw("Error");
		left_to_calculate.push(tmp);
	}
}



template <typename T>
void RPN<T>::Calculate(){

	// std::string tmp;
	// int	value;

	// while (!left_to_calculate.empty())
	// {
	// 	tmp = left_to_calculate.top();
	// 	while (Is_sign(tmp[0]) != 1 && !left_to_calculate.empty())//envoit jusqua un signe dans calculated, 
	// 	{
	// 		//utilise un ss stream pour tester si pas >= 10 ou si negatif
	// 		std::stringstream ss(left_to_calculate.top()); // dans autre variable
	// 		if (ss >> value && (value < 0 || value >= 10))
	// 			throw;
	// 		// calculated.push();
	// 	}
	// 	//puis dans calculated parse
		
	// }
	//parsing pas fini, faire en mm temps (triple valeurs (trop de val a la suite ) / signes de trop)
	//test limite
}