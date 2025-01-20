/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:07:08 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/21 16:53:08 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <cstdio>

#define FEB 2
#define IS_LEAP(year) ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))

class Date
{
	private:
		int _year;
		int _month;
		int _day;
	public:
		Date();
		Date &operator=(Date const &ref);
		Date(Date const &ref);
		Date(std::string &);
		bool operator<(Date const &ref) const;
		bool operator>(Date const &ref) const;
		bool operator==(Date const &ref) const;
		bool operator!=(Date const &ref) const;
		bool validate();
		int getDay() const;
		int getMonth() const;
		int getYear() const;
		void print() const;
		~Date();
		class IncorrectDateFormatException: public std::exception {
			virtual const char* what() const throw();
		};
};



#endif
