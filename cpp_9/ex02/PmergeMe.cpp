/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:40:40 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/20 18:14:20 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

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
				throw std::runtime_error("Error, value isn't between 0 and 9");

			taken_value = std::strtol(str.c_str(), NULL, 10); //taken value in long to test it
			if (taken_value > INT_MAX)
				throw std::runtime_error("Error, one value superior than INT_MAX");
			to_sort.push_back(std::atoi(str.c_str()));//stock value into vector
		}
		has_duplicate(to_sort);
	}
	else
	{
		while (av[++i])
		{
			str = av[i];
			if (str.find_first_not_of("0123456789") != std::string::npos)
				throw std::runtime_error("Error, value isn't between 0 and 9");

			taken_value = std::strtol(str.c_str(), NULL, 10);
			if (taken_value > INT_MAX)
				throw std::runtime_error("Error, one value superior than INT_MAX");
			to_sort2.push_back(std::atoi(str.c_str()));//stock value into deque
		}
		has_duplicate(to_sort2);
	}
}


void PmergeMe::print_Values(std::string before_or_after, bool flag_container, bool flag_print_all)
{
	if (flag_container == 0)
	{
		if (flag_print_all == 0)
		{		
			std::cout << before_or_after;
			for (size_t i = 0; i < size; ++i)
          		std::cout << to_sort[i] << " ";
          	std::cout << std::endl;
		}
		else
		{
			std::cout << before_or_after;

			//can print the first 5 nmbrs
			if (size <= 5)
			{
				for (size_t i = 0; i < size; ++i)
          			std::cout << to_sort[i] << " ";
				std::cout << '\n';
				return;
			}
			
			// print 4 first then [...]
			for (size_t i = 0; i < 4; ++i)
           		std::cout << to_sort[i] << " ";
			std::cout << "[...]\n";
		}
	}
}


void PmergeMe::print_Times(bool flag_container)
{
	std::cout << std::fixed << std::setprecision(4);
	if (flag_container == 0)
		std::cout << "Time to process a range of " << size << " elements with std::vector  : " << (vector_end - vector_start) << " us" << '\n';
	else
		std::cout << "Time to process a range of " << size << " elements with std::deque  : " << (deque_end - deque_start) << " us" << std::endl;
}


void PmergeMe::Merge_insertion_sort(bool flag_container) {
	
	if (flag_container == 0)
		size = to_sort.size();
	else
		size = to_sort2.size();
	print_Values("Before:  ", flag_container, 1);

	if (flag_container == 0)
		Ford_johnson_vector(to_sort); //algorithm to sort all values
	else
		Ford_johnson_deque(to_sort2);

	print_Values("After:  ", flag_container, 1);
	print_Times(flag_container);
}


static double	getTimeUs()
{
	clock_t	time = std::clock();

	return (static_cast<double>(time) * 1e6 / CLOCKS_PER_SEC);//convert to microseconds 1^6, CLOCKS_PER_SEC is nessesary to convert the clocks
}


int jacobsthal_nbr(size_t pos_of_jacob) 
{
    int next, a = 0, b = 1;

    if (pos_of_jacob == 0)
        return 0;
    for(size_t i = 0; i < pos_of_jacob; ++i)
    {
        next = b + 2 * a;
        a = b;
        b = next;
    }
    return b;
}


template <typename T>
void jacobsthal(T &stock_main, T &stock_pend){

	int	jn, jn1; //current and past jacobs number
	int	n = 3; //start at 3rd jacobstal number (1), since first and second = 0, 1, and always need previous jn1
	//Sort while integrating pend to main
	while ((jn = jacobsthal_nbr(n)))
	{
		if (stock_pend.empty() || stock_pend.empty())
			break ;
		jn1 = jacobsthal_nbr(n - 1);
		size_t	nb_insertion = jn - jn1; //total nmbrs to insert in main
		int pos = jn; //start taking values to insert from current jacobstal value

		if (pos >= static_cast<int>(stock_pend.size())) //if jacobstal value bigger than pend size
			pos = stock_pend.size() - 1;//equal to its last position (s - 1)

		while (nb_insertion--)
		{
			if (stock_pend.empty() || stock_main.empty()) //when no more values exit
					break ;
			typename T::iterator insertPos = std::lower_bound(stock_main.begin(), stock_main.end(), stock_pend[pos]);//lower_bound found position to insert value and stay sorted
			stock_main.insert(insertPos, stock_pend[pos]); //adds value from in pend to the main
			stock_pend.erase(stock_pend.begin() + pos);
			pos--;
		}
		++n;
	}
}

void PmergeMe::Ford_johnson_vector(std::vector<int> &all_or_main){

	vector_start = getTimeUs();
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

	Ford_johnson_vector(stock_main); // while size > 2, keep sorting
	jacobsthal(stock_main, stock_pend);

	all_or_main = stock_main;
	vector_end = getTimeUs();
}


void PmergeMe::Ford_johnson_deque(std::deque<int> &all_or_main){

	deque_start = getTimeUs();

	if (all_or_main.size() < 2)
		return ;
	bool is_sorted = true;
	for (size_t i = 1; i < all_or_main.size(); ++i)
	{
		if (all_or_main[i-1] > all_or_main[i])
		{
			is_sorted = false;
			break;
		}
	}
	if (is_sorted)
		return;

	std::deque<std::pair <int, int> > pairs;
	std::deque<int> stock_main, stock_pend;
	int impair = -1;

	make_into_pairs(all_or_main, pairs, impair);
	stock_high_low(pairs.begin(), pairs.end(), impair, stock_main, stock_pend);

	Ford_johnson_deque(stock_main);
	jacobsthal(stock_main, stock_pend);

	all_or_main = stock_main;
	deque_end = getTimeUs();
}
