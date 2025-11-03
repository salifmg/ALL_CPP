/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:41:35 by smagassa          #+#    #+#             */
/*   Updated: 2025/10/31 19:42:01 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() :N(0) {}

Span::~Span() {}

Span::Span(unsigned int nbrs_to_hold) :N(nbrs_to_hold) {}

Span::Span(const Span& FixedCpy) :N(FixedCpy.N) {}

Span& Span::operator=(const Span& FixedCpy) {

	this->N = FixedCpy.N;
	return (*this);
}


void Span::addNumber(int nbr) {
	
	if (contain.size() >= N)
		throw TooManyNumbers();
	contain.push_back(nbr);
}

int getShortestSpan(size_t i, std::vector<int> contain) {

	int compare;
	size_t size_used = contain.size(); // even if N is bigger than nbr of values, it works

	compare = contain[i+1] - contain[i]; //next value - current = shortest_span
	while (i+1 != size_used) {//while next index smaller than total length of contain

		if (compare > contain[i+1] - contain[i] && contain[i+1] - contain[i] >= 0) //if shortest_span > than next value - current, and it isnt negative
			compare = contain[i+1] - contain[i]; // new_shortest_span
		i++;
	}
	return (compare);
}

int Span::shortestSpan() {

	if (contain.size() == 0 || contain.size() == 1)
		throw NotEnoughNumbers();

	std::sort(contain.begin(), contain.end()); //sort for the numbers to be in correct order, to test
	return(getShortestSpan(0, contain));
}


int Span::longestSpan() {

	if (contain.size() == 0 || contain.size() == 1)
		throw NotEnoughNumbers();
	
	int min = contain.front();
	int max = contain.back();
// OR
// int min(vector.begin(), vector.end());
// int max(vector.begin(), vector.end());
	return (max - min);
}

template <typename T>
void Span::addNumberRange(T begin, T end) { //pas bon fait avec insert direct

    // for (T value_it = begin; value_it != end; ++value_it) {
	// 	if (contain.size() >= N)
	// 		throw TooManyNumbers();	 		//lower_bound for position to insert value and stay sorted
	// 	std::vector<int>::iterator pos_it = std::lower_bound(contain.begin(), contain.end(), *value_it);
	// 	contain.insert(pos_it, *value_it);
    // }
	//OR
	if (std::distance(begin, end) + contain.size() > N)
		throw TooManyNumbers();
	contain.insert(contain.end(), begin, end);
}