/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:39:05 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/18 13:32:18 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <string>
#include <Date.hpp>


class BitcoinExchange
{
	private:
		std::map<Date, float> _exchangeRates;
		std::ifstream _inputFile;

		BitcoinExchange();
		void csvParser();
		void parseCsvLine(std::string &);
		bool isDecimal(std::string &, bool) const;
		void getExchange(std::string &) const;
		float getToExchange(std::string &) const;
	public:
		BitcoinExchange(std::string &fileName);
		BitcoinExchange(BitcoinExchange const &ref);
		BitcoinExchange &operator=(BitcoinExchange const &ref);
		~BitcoinExchange();
		void printExchange();
		class FileNotFoundException: public std::exception {
			virtual const char* what() const throw();
		};

		class FileIncorrectFormatException: public std::exception {
			virtual const char* what() const throw();
		};

		class NegativeNumberException:  public std::exception {
			virtual const char* what() const throw();
		};

		class TooLargeNumberException: public std::exception {
			virtual const char* what() const throw();
		};
};



#endif
