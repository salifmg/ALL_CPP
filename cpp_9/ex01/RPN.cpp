/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:34:20 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/03 14:49:10 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

int RPN::Check_valitidy(std::string str){ 

	for (int i = 0; str[i] != NULL; ++i) //if not between 0-9 and not equal ' ' or +-*/ error
		if (Test_string(str[i]) == 1)
			return 1;

	Take_numbers_sign(str);
	//test nbr espaces, test 1er char left_to_calculate est un nombre, denrier un chiffre
	if ()
	{

	}

	While ()
	{
		
	}
	return 0;
}

void RPN::Take_numbers_sign(std::string str)
{
	std::string tmp;
	std::stringstream ss(str);

	while (ss >> tmp)
	{
		if (tmp.size() == 1)
			left_to_calculate.push(tmp);
	}
}

int Test_string(char str)
{
	if (Is_number(str) || Is_space(str) || Is_sign(str))
		return (0);
	else
		return (1);
}

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

void RPN::Calculate(){

	std::string tmp;
	int	value;

	while (!left_to_calculate.empty())
	{
		tmp = left_to_calculate.top();
		while (Is_sign(tmp[0]) != 1 && !left_to_calculate.empty())//envoit jusqua un signe dans calculated, 
		{
			//utilise un ss stream pour tester si pas >= 10 ou si negatif
			std::stringstream ss(left_to_calculate.top()); // dans autre variable
			if (ss >> value && (value < 0 || value >= 10))
				throw;
			// calculated.push();
		}
		//puis dans calculated parse
		
	}
	//parsing pas fini, faire en mm temps (triple valeurs (trop de val a la suite ) / signes de trop)
	//test limite
}