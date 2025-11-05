/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:57:31 by smagassa          #+#    #+#             */
/*   Updated: 2025/11/05 15:52:34 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <string>
#include <stack>
#include <list>

template <typename T>
struct MutantStack : public std::stack<T> //stuct, not class bc all members are public
{
	MutantStack();
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	
	iterator    begin(void) { return (this->c.begin());}
	iterator    end(void) {return (this->c.end());}

	reverse_iterator    rbegin(void) { return (this->c.rbegin());}
	reverse_iterator    rend(void) {return (this->c.rend());}

	const_iterator begin(void) const { return (this->c.begin());}
	const_iterator end(void) const {return (this->c.end());}
	
	const_reverse_iterator rbegin(void) const { return (this->c.rbegin());}
	const_reverse_iterator rend(void) const {return (this->c.rend());}

};

#include "MutantStack.tpp"

#endif