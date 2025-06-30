/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:33:17 by smagassa          #+#    #+#             */
/*   Updated: 2025/06/30 16:47:54 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string line;
	std::string created_file;


	if (ac != 4)
		return (std::cout << "CORRECT USE ./notSed <filename> <s1> <s2>" << std::endl , 1);
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	created_file = filename + ".remplace";

	std::ifstream file(filename.c_str());
	if (!file)
		return (std::cerr << "Error opening input file\n", 1);
	std::ofstream newFile(created_file.c_str());
    if (!file)
		return (std::cerr << "Error creating new file\n", 1);

    while (std::getline(file, line))
	{
        std::string result;
        size_t i = 0;
        while (line[i]) 
		{
            if (line.compare(i, s1.size(), s1) == 0 && !s1.empty())
			{
                result += s2;
                i += s1.size();
            } 
			else 
			{
                result += line[i];
                ++i;
            }
        }
		std::cout << result << std::endl;
        newFile << result << std::endl;
    }
	file.close();
	newFile.close();
	return (0);
}
