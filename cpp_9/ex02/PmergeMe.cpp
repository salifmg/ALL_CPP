/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:40:40 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/13 19:16:28 by smagassa         ###   ########.fr       */
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
	
	if (flag_container == 0)
		Ford_johnson_vector(to_sort); //ford johnson to find where to insert
	else
		Ford_johnson_deque(to_sort2);

}

void PmergeMe::Ford_johnson_vector(std::vector<int> all_or_main){

	std::vector<int> compare_sorted = all_or_main;
	std::sort(compare_sorted.begin(), compare_sorted.end());

	if (all_or_main.size() < 2 || all_or_main == compare_sorted)
		return;
	// std::vector<std::pair <int, int> > pairs;
	// std::vector<int> stock_main;
	// std::vector<int>stock_pend;
	// int impaire = -1;

	//METTRE DANS PAIRES AVEC IT ET IT+1
	// comparer .first et .second popur mettre le plus petit en premier avec push back
	//si impaire == -1 alors 
	//le rajouter a la fin du main qu'on envoi en recursive si > 2

	//implementer jacobs-tal
	//all_or_main = stock_main
}





void PmergeMe::Ford_johnson_deque(std::deque<int> all_or_main){

	std::deque<int> compare_sorted = all_or_main;
	std::sort(compare_sorted.begin(), compare_sorted.end());

	if (all_or_main.size() < 2 || all_or_main == compare_sorted)
		return;

	// std::vector<std::pair <int, int> > pairs;
	// std::vector<int> stock_main;
	// std::vector<int>stock_pend;
	// int impaire = -1;

	//METTRE DANS PAIRES AVEC IT ET IT+1
	// comparer .first et .second popur mettre le plus petit en premier avec push back
	//si impaire == -1 alors 
	//le rajouter a la fin du main qu'on envoi en recursive si > 2

	//implementer jacobs-tal
	//all_or_main = stock_main
}