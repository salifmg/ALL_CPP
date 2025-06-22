/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:16:12 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/22 19:41:24 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string phrase = "HI THIS IS BRAIN";
	std::string *stringPTR = &phrase;
	std::string &stringREF = phrase;
	
	std::cout << "Memory address of the string variable: " << &phrase << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "\nValue of the string variable: " << phrase << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	return (0);
}
