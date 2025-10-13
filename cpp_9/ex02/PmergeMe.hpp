/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:40:41 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/13 19:09:21 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <sstream>

#include <string>
#include <vector>
#include <deque>
#include <set>

#include <cstdlib>
#include <climits>
#include <algorithm>

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		void	Into_container(char **, bool);
		void Merge_insertion_sort(bool);
		void Ford_johnson_vector(std::vector<int>);
		void Ford_johnson_deque(std::deque<int>);

	private:
		std::vector<int>to_sort;
		std::deque<int>to_sort2;	
};




#endif

/*A FAIRE




affiche les erreurs a fixer et la raison prq err
utilise la classe de exo juste avant pr msg personalise
*/