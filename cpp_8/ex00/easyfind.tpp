/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:53:26 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/04 19:48:31 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(T& contain, int to_find)
{
	typename T::iterator it;
	it = std::find(contain.begin(), contain.end(), to_find);

	if (it != contain.end())
		return(std::cout << "First occurrence of " << to_find << " | Location: " << std::distance(contain.begin(), it) << std::endl, 0);
	else
		return(std::cerr << "No occurence of " << to_find << " found within the container" << std::endl, 1);
}