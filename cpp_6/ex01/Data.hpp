/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 16:42:25 by smagassa          #+#    #+#             */
/*   Updated: 2025/08/18 20:08:52 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>
#include <string>

class Data
{
	public:
		Data();
		Data(const Data& FixedCpy);
		Data& operator=(const Data& FixedCpy);
		~Data();

	private:
		std::string name;
};


#endif

