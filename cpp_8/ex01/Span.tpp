/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:41:35 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/07 21:56:51 by smagassa         ###   ########.fr       */
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
	
	if (contain.size() == N)
		throw TooManyNumbers();
	std::vector<int>::iterator it;
	it = std::lower_bound(contain.begin(), contain.end(), nbr);
	contain.insert(it, nbr);
}

int getShortestSpan(unsigned int i, unsigned int N, std::vector<int> contain) {

	int compare;

	compare = contain[i+1] - contain[i];
	while (i+1 != N) {

		if (compare > contain[i+1] - contain[i] && contain[i+1] - contain[i] >= 0)
			compare = contain[i+1] - contain[i];
		i++;
	}
	return (compare);
}

int Span::shortestSpan() {

	if (contain.size() == 0 || contain.size() == 1)
		throw NotEnoughNumbers();

	return(getShortestSpan(0, N, contain));
}

int Span::longestSpan() {

	if (contain.size() == 0 || contain.size() == 1)
		throw NotEnoughNumbers();
	int min = contain.front();
	int max = contain.back();
	return (max - min);
}

template <typename T>
void Span::addNumberRange(T begin, T end) {
    for (T it = begin; it != end; ++it) {
        addNumber(*it);
    }
}