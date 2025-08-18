/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 20:22:11 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/18 20:11:00 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data* ptr; //test si ca apl bien le constucteur par defaut
	//print l'adrs

	uintptr_t raw = Serializer::serialize(ptr);
	//print l'adrs
	Data* ptr2 = Serializer::deserialize(raw);
	//print l'adrs

	return (0);
}