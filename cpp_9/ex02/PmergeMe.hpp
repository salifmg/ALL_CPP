/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:40:41 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/09 14:54:58 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <cstdlib>
#include <climits>

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		void	Into_container(char **, bool);

	private:
		std::vector<int>to_sort;
		std::deque<int>to_sort2;	
};




#endif

/*A FAIRE


verifie



*/