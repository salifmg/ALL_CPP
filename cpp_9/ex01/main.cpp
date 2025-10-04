/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:26:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/04 17:39:44 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN<void> instance;
	std::string str;

	try
	{
		if (ac == 1 || ac > 2)
			throw("Error");
		str = av[1];
		
		instance.Check_valitidy(str);
		instance.Calculate();
		return(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

//remplace return 1 pas throw plsu clean