/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:41:35 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/05 21:02:04 by smagassa         ###   ########.fr       */
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
		return (throw TooManyNumbers());
	std::vector<int>::iterator it;
	it = std::lower_bound(contain.begin(), contain.end(), nbr);
	contain.insert(it, nbr);
}

int getShortestSpan(unsigned int i, unsigned int N, std::vector<int> contain) {

	int compare;

	compare = contain[i+1] - contain[i];
	while (i+1 != N) {

		if (compare > contain[i+1] - contain[i])
			compare = contain[i+1] - contain[i];
		i++;
	}
	return (compare);
}

int Span::shortestSpan() {

	if (contain.size() == 0 || contain.size() == 1)
		return (throw NotEnoughNumbers(), 1);

	return(getShortestSpan(0, N, contain));
}

int Span::longestSpan() {

	if (contain.size() == 0 || contain.size() == 1)
		return (throw NotEnoughNumbers(), 1);
	int min = contain.front();
	int max = contain.back();
	return (max - min);
}
