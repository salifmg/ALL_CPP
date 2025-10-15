/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:40:40 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/15 19:25:53 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

template <typename T>
void has_duplicate(const T & v)
{
    std::set<int> s(v.begin(), v.end());
    if (v.size() != s.size())
		throw std::runtime_error("Error4");
}

void	PmergeMe::Into_container(char **av, bool flag_container){

	std::string str;
	long taken_value;
	int i = 0;

	if (flag_container == 0)
	{
		while (av[++i])
		{
			str = av[i];
			if (str.find_first_not_of("0123456789") != std::string::npos) //if not between 0-9 error
				throw std::runtime_error("Error2");

			taken_value = std::strtol(str.c_str(), NULL, 10); //taken value in long to test it
			if (taken_value > INT_MAX)
				throw std::runtime_error("Error3");
			to_sort.push_back(std::atoi(str.c_str()));
		}
		has_duplicate(to_sort);
	}
	else
	{
		while (av[++i])
		{
			str = av[i];
			if (str.find_first_not_of("0123456789") != std::string::npos) //if not between 0-9 error
				throw std::runtime_error("Error2.1");

			taken_value = std::strtol(str.c_str(), NULL, 10); //taken value in long to test it
			if (taken_value > INT_MAX)
				throw std::runtime_error("Error3.2");
			to_sort2.push_back(std::atoi(str.c_str()));//stock value into deque
		}
		has_duplicate(to_sort2);
	}
}


void PmergeMe::Merge_insertion_sort(bool flag_container) {
	
	//pas oublier prendre temps start
	if (flag_container == 0)
		Ford_johnson_vector(to_sort); //algorithm to sort all values
	else
		Ford_johnson_deque(to_sort2);
	//flag pr tt print ou non
	//print
	//prendre temps end
	//calcul et affichage tmeps
	//(end - start) - total_sort_vector (POUR DEQUE)
}


void print_pairs(std::vector<std::pair <int, int> >::iterator it_strt, std::vector<std::pair <int, int> >::iterator it_end, int impair){ //TESTING

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

void print_main_pend(std::vector<int> main, std::vector<int> pend){ //TESTING

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

void	stock_high_low(std::vector<std::pair <int, int> >::iterator it_strt, std::vector<std::pair <int, int> >::iterator it_end, int impair, std::vector<int> &main, std::vector<int> &pend){

	print_pairs(it_strt, it_end, impair); //test

	while(it_strt != it_end)
	{
		main.push_back(it_strt->first); //SMALLEST
		pend.push_back(it_strt->second); //BIGGEST
		it_strt++;
	}
	if (impair != -1)
		main.push_back(impair);
		
	print_main_pend(main, pend); //test
}

void make_into_pairs(std::vector<int> &all_or_main, std::vector<std::pair <int, int> > &pairs, int impair)
{
	for (size_t i = 0; i < all_or_main.size(); ++i)
	{
		if (all_or_main[i + 1])
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

void PmergeMe::Ford_johnson_vector(std::vector<int> &all_or_main){

	if (all_or_main.size() < 2)
		return ;
	bool is_sorted = true;
	for (size_t i = 1; i < all_or_main.size(); ++i) //test curr value with past one is smaller, to see if already sorted
	{
		if (all_or_main[i-1] > all_or_main[i])
		{
			is_sorted = false;
			break;
		}
	}
	if (is_sorted)
		return;

	std::vector<std::pair <int, int> > pairs; //smallest, biggest number
	std::vector<int> stock_main, stock_pend; //same
	int impair = -1;

	make_into_pairs(all_or_main, pairs, impair);
	stock_high_low(pairs.begin(), pairs.end(), impair, stock_main, stock_pend);

	Ford_johnson_vector(stock_main);
	//qd taille > 2 sort et fait tri en integrant le pend

	//implementer jacobs-tal //algorithm to find where to insert each values
	//all_or_main = stock_main;
}





void PmergeMe::Ford_johnson_deque(std::deque<int> &all_or_main){

	std::deque<int> compare_sorted = all_or_main;
	std::sort(compare_sorted.begin(), compare_sorted.end());

	if (all_or_main.size() < 2 || all_or_main == compare_sorted)
		return;

}