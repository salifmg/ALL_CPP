/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:53:26 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/03 20:15:44 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
//ajoute les containers?

template <typename T>
int easyfind(T& contain, int to_find)
{
	if (!to_find || !contain)
		return(std::err << "No occurence or empty container" << std::endl, 1);
	
	T::iterator it; //ou juste std::vector<int> //test si bien un container ints
	it = std::find(contain.begin(), contain.end(), to_find);
	
	if (it != contain.end())
		return(std::cout << "The first occurrence: " << to_find << "location is: " << (it-contain.begin()) << std::endl, 0); // si emplacement marche pas retire ou fait avec search
	else
		return(std::err << "No occurence found with the container" << std::endl, 1);
}