/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:11 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/22 18:58:00 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{

	Base *random_instance = generate();

	std::cout << "by object pointer : ";
	identify(random_instance);

	std::cout <<std::endl;

	std::cout << "by object reference : ";
	identify(*random_instance);

    delete random_instance;
	return (0);
}