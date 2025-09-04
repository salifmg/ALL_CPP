/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 16:26:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/04 19:49:01 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	int find = 5;
	int myints[] = {54, 5996, 8, 5};

	std::vector<int> last_occ (4);
	std::copy (myints, myints+4, last_occ.begin());

	std::list<int> no_occ (5, 10);

	std::deque<int> no_occ2;
	no_occ2.push_back(10);

	std::set<int> empty_cont;	

	std::vector<char> valid_occ;
	valid_occ.push_back('v'), valid_occ.push_back('P'); //80 = 'P'

	std::cout << "vector int" << std::endl, easyfind(last_occ, find);
	std::cout << "\n" << "list" << std::endl, easyfind(no_occ, find);
	std::cout << "\n" << "deque" << std::endl, easyfind(no_occ2, find);
	std::cout << "\n" << "set" << std::endl, easyfind(empty_cont, 0);
	std::cout << "\n" << "vector char" << std::endl, easyfind(valid_occ, 80);

	return(0);
}