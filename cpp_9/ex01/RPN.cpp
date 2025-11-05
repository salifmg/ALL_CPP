/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:34:20 by smagassa          #+#    #+#             */
/*   Updated: 2025/11/05 18:03:32 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

int Is_number(char str)
{
	if (str >= '0' && str <= '9')
		return (0);
	return 1;
}

int Is_sign(char str)
{
	if (str == '+' || str == '-' || str == '*' || str == '/')
		return (0);
	return 1;
}

void RPN::Check_valitidy(std::string str){ 

	if (str.find_first_not_of("0123456789+-*/ ") != std::string::npos) //if not between 0-9 and not equal ' ' or +-*/ error
		throw std::runtime_error("Error");
	nbr_spaces = 0, nbr_values = 0, nbr_operators = 0;
	for (int i = 0; str[i] != '\0'; ++i) //take nbr of spaces, and values/operators
	{
		if (str[i] == ' ')
			nbr_spaces++;
		else if (Is_number(str[i]) == 0)
			nbr_values++;
		else
			nbr_operators++;
	}

	if (nbr_spaces != (nbr_values + nbr_operators) -1) //to much spaces
		throw std::runtime_error("Error");
	if (nbr_operators != nbr_values - 1) //nbr of operators isnt equal to nbr of nmbrs - 1
		throw std::runtime_error("Error");
}


void RPN::Take_while_numbers(std::string str)
{
	std::string tmp;
	std::stringstream ss(str);

	while (ss >> tmp)
	{
		if (tmp.size() != 1)
			throw std::runtime_error("Error");
		if (Is_sign(tmp[0]) == 0)
		{
			Calculate(tmp[0]);
		}
		else 
			to_calculate.push(tmp[0]-'0'); //take values
	}
	if (to_calculate.size() == 1) //if calculus over but more than one number
		std::cout << to_calculate.top() << std::endl;
	else
		throw std::runtime_error("Error");
}


void RPN::Calculate(char oper){

	int a, b;
	if (to_calculate.size() < 2) //calculus but with less than 2 numbers
		throw std::runtime_error("Error");

	b = to_calculate.top();// last value added
	to_calculate.pop(); // deletes it
	a = to_calculate.top();// first value added
	to_calculate.pop();// deletes it
	switch (oper)
	{
		case '+':
			to_calculate.push(a+b);
			break;
		case '-':
			to_calculate.push(a-b);
			break;
		case '*':
			to_calculate.push(a*b);
			break;
		case '/':
			if (b == 0)
				throw std::runtime_error("Error: division by zero");
			to_calculate.push(a/b);
			break;
		default :
			throw std::runtime_error("Error"); //for format
	}
}