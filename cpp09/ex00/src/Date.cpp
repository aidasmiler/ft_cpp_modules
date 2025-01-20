/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:13:04 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/21 16:56:28 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Date.hpp>

Date::Date(){}

Date::~Date() {}

Date::Date(std::string &dateString) : _year(-1), _month(0), _day(0)
{
	std::stringstream dateStr(dateString);
	char dash1, dash2;
	char extra;
	if (dateString.find(' ') != std::string::npos || \
		!(dateStr >> _year >> dash1 >> _month >> dash2 >> _day) || \
		dash1 != '-' || dash2 != '-' || (dateStr >> extra) || !validate())
		throw Date::IncorrectDateFormatException();
}

Date::Date(Date const &ref)
{
	*this = ref;
}

Date &Date::operator=(Date const &ref)
{
	if (this == &ref)
		return *this;
	this->_day = ref._day;
	this->_month = ref._month;
	this->_year = ref._year;
	return *this;
}

bool Date::operator<(Date const &other) const
{
	if (this->getYear() != other.getYear())
		return this->getYear() < other.getYear();
	if (this->getMonth() != other.getMonth())
		return this->getMonth() < other.getMonth();
	return this->getDay() < other.getDay();
}

bool Date::operator>(Date const &other) const
{
	if (this->getYear() != other.getYear())
		return this->getYear() > other.getYear();
	if (this->getMonth() != other.getMonth())
		return this->getMonth() > other.getMonth();
	return this->getDay() > other.getDay();
}

bool Date::operator==(Date const &other) const
{
	return (this->getYear() == other.getYear() && this->getMonth() == other.getMonth() \
			&& this->getDay() == other.getDay());
}

bool Date::operator!=(Date const &other) const
{
	return (this->getYear() != other.getYear() || this->getMonth() != other.getMonth() \
			|| this->getDay() != other.getDay());
}

int Date::getDay() const
{
	return this->_day;
}

int Date::getMonth() const
{
	return this->_month;
}

int Date::getYear() const
{
	return this->_year;
}

bool Date::validate()
{
	if (_year < 0 || _month < 1 || _month > 12)
		return false;
	static const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int daysInMonth = daysPerMonth[_month - 1];
	if (_month == FEB && IS_LEAP(_year))
		daysInMonth = 29;
	return (_year >= 0 && _month >= 1 && _month <= 12 && _day >= 1 && _day <= daysInMonth);
}

void Date::print() const {
	std::string formatMonth = this->getMonth() < 10 ? "0" : "";
	std::string formatDay = this->getDay() < 10 ? "0" : "";
	std::cout << this->getYear() << "-" << formatMonth << this->getMonth() << "-" << formatDay << this->getDay();
}

const char* Date::IncorrectDateFormatException::what() const throw() {
	return ("Error: bad input => ");
}
