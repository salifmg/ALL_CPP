/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:40:41 by smagassa          #+#    #+#             */
/*   Updated: 2025/11/05 16:45:09 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <sstream>

#include <cstdlib>
#include <climits>
#include <ctime>

#include <algorithm>
#include <iomanip>
#include <string>

#include <vector>
#include <deque>
#include <set>

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		void	Into_container(char **, bool);
		void Merge_insertion_sort(bool);
		void Ford_johnson_vector(std::vector<int>&);
		void Ford_johnson_deque(std::deque<int>&);
		void print_Values(std::string, bool, bool);
		void print_Times(bool);

	private:
		std::vector<int>to_sort;
		std::deque<int>to_sort2;

		unsigned int size;
		double vector_start;
		double vector_end;
		double deque_start;
		double deque_end;
};


template <typename T>
void has_duplicate(const T & v)
{
    std::set<int> s(v.begin(), v.end());
    if (v.size() != s.size())
		throw std::runtime_error("Error, has a duplicate value");
}


template <typename T, typename T2>
void print_pairs(T it_strt, T2 it_end, int impair){ //TESTING

	std::cout << "Pairs : ";
	while(it_strt != it_end)
	{
		std::cout << "[ "<< it_strt->first << " " << it_strt->second << " ] ";
		it_strt++;
	}
	if (impair != -1)
		std::cout << '\n' << "Impair : "<< impair << '\n' << std::endl;
	else
		std::cout << '\n';
}


template <typename T>
void print_main_pend(const T &main, const T &pend){ //TESTING

	std::cout << "main : ";
	for(size_t i=0; i < main.size(); ++i)
	{
		std::cout << main[i] << ' ';
	}
	std::cout << '\n' << "pend : ";
	for(size_t i=0; i < pend.size(); ++i)
	{
		std::cout << pend[i] << ' ';
	}
	std::cout << '\n' << std::endl;
}


template <typename T, typename T2, typename T3>
void	stock_high_low(T it_strt, T2 it_end, int impair, T3 &main, T3 &pend){

	// print_pairs(it_strt, it_end, impair); //test

	while(it_strt != it_end)
	{
		main.push_back(it_strt->first); //SMALLEST
		pend.push_back(it_strt->second); //BIGGEST
		it_strt++;
	}
	if (impair != -1)
		main.push_back(impair);
		
	// print_main_pend(main, pend); //test
}


template <typename T, typename T2>
void make_into_pairs(T &all_or_main, T2 &pairs, int &impair)
{
	size_t all_or_main_size = all_or_main.size();

	for (size_t i = 0; i < all_or_main_size; ++i)
	{
		if (i + 1 < all_or_main_size)
		{
			if (all_or_main[i] < all_or_main[i + 1]) //std::max et std::min
				pairs.push_back(std::make_pair(all_or_main[i], all_or_main[i + 1]));
			else
				pairs.push_back(std::make_pair(all_or_main[i + 1], all_or_main[i]));
			i++;
		}
		else
		{
			impair = all_or_main[i];
		}
	}
}


#endif
