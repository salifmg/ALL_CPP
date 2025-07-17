/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:20:27 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/17 15:21:21 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "AAnimal.hpp"

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& FixedCpy);
		Brain& operator=(const Brain& FixedCpy);
		~Brain(void);

	private:
		std::string ideas[100];
};

#endif