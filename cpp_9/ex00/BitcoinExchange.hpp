/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagassa <smagassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 14:57:26 by smagassa          #+#    #+#             */
/*   Updated: 2025/09/26 19:54:52 by smagassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <utility>
#include <float.h>
#include <list>

class BitcoinExchange
{
	public:
			BitcoinExchange();
			~BitcoinExchange();

			void Checkfiles(char **);
			void Validfirst_line();
			void Stock_database();
			void Stock_input();
			void Exchange_rate();
			int	Check_validity(std::string, std::string, int* , float);

		class DosentOpenFile : public std::exception
		{
			public :
					DosentOpenFile(std::string file) :message("Error: can't open " + file + " file"){};
					virtual ~DosentOpenFile() throw() {}
					virtual const char* what() const throw()
					{
						return (message.c_str());
					}
			
			private:
					std::string message;
		};

		class BadLineFormat : public std::exception
		{
			public :
					BadLineFormat(std::string file, std::string format) :message("Error: " + file + " first line should be: " + format){};
					virtual ~BadLineFormat() throw() {}
					virtual const char* what() const throw()
					{
						return (message.c_str());
					}
			
			private:
					std::string message;
		};

		class ParsingFailure : public std::exception
		{
			public :
				
					ParsingFailure(std::string str, std::ifstream *extract_input) :message(str){extract_input->close();};
					virtual ~ParsingFailure() throw() {}
					virtual const char* what() const throw()
					{
						return (message.c_str());
					}
			
			private:
					std::string message;
		};

	private:
			std::string input_filename;
			std::string database;
			std::string input_line, databases_line;
			std::ifstream *extract_input, *extract_database;

			int tmp_date[2];
			std::list<std::pair <std::string, std::string> > input_datas;
			std::list<std::pair <int*, float> > base_datas; //PAS OUBLIER DE delete []base_datas;
			std::list<std::pair <std::string, std::string> >::iterator it;
			std::list<std::pair <int*, float> >::iterator it2;
};


#endif