/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:02:23 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/02 19:05:36 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	int i = 1;
	int i2 = 0;
	char **str = av;

	while (i < ac)
	{
		while (str[i][i2])
		{
			if (str[i][i2] >= 'a' && str[i][i2] <= 'z')
				str[i][i2] = str[i][i2] - 32;
			i2++;
		}
		i2 = 0;
		std::cout << str[i];
		i++;
	}
	return (0);
}
