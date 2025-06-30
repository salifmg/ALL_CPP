/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:52:51 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/30 18:13:57 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP
#include <iostream>
#include <string>


class Harl {

public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);

private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif