/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 16:11:23 by smagassa          #+#    #+#             */
/*   Updated: 2025/07/17 15:21:34 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"

class WrongCat :public WrongAnimal{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& FixedCpy);
		WrongCat& operator=(const WrongCat& FixedCpy);
		~WrongCat(void);
		std::string getType(void) const;
};

#endif