/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:39:39 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/21 17:02:01 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::string &fileName): _inputFile(fileName.c_str())
{
	if (!_inputFile.is_open())
		throw BitcoinExchange::FileNotFoundException();
	csvParser();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &ref)
{
	*this = ref;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &ref)
{
	if (this == &ref)
		return *this;
	this->_exchangeRates = ref._exchangeRates;
	return *this;
}

void BitcoinExchange::csvParser()
{
	std::string name = "data.csv";
	std::ifstream csv(name.c_str());
	if (!csv.is_open())
		throw BitcoinExchange::FileNotFoundException();
	std::string line;
	if (std::getline(csv, line) && line != "date,exchange_rate")
		parseCsvLine(line);
	while(std::getline(csv, line))
		parseCsvLine(line);
}

void BitcoinExchange::parseCsvLine(std::string &line)
{
	std::stringstream lineStr(line);
	std::string date, value;
	std::getline(lineStr, date, ',');
	lineStr >> value;
	if (!lineStr.eof() || date.empty() || value.empty() || !isDecimal(value, false))
		throw BitcoinExchange::FileIncorrectFormatException();
	try
	{
		float exchangeRate = std::atof(value.c_str());
		Date dateAux(date);
		_exchangeRates[dateAux] = exchangeRate;
	}
	catch(const std::exception& e)
	{
		throw BitcoinExchange::FileIncorrectFormatException();
	}
}

bool BitcoinExchange::isDecimal(std::string &value, bool checkNegative) const
{
	bool decimalPoint = false;
	size_t i = -1;
	if (checkNegative && value[0] == '-')
		i++;
	while (value[++i])
	{
		if (!std::isdigit(value[i]))
		{
			if (value[i] == '.' && !decimalPoint && i < value.length() - 1)
				decimalPoint = true;
			else
				return false;
		}
	}
	return true;
}

float BitcoinExchange::getToExchange(std::string &value) const
{
	try
	{
		if (!isDecimal(value, true))
			throw Date::IncorrectDateFormatException();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << value << '\n';
	}
	float toExchange = std::atof(value.c_str());
	if (toExchange < 0)
		throw BitcoinExchange::NegativeNumberException();
	if (toExchange > 1000)
		throw BitcoinExchange::TooLargeNumberException();
	return toExchange;
}

void BitcoinExchange::getExchange(std::string &line) const
{
	std::stringstream lineStr(line);
	std::string dateStr, value;
	size_t pipe = line.find(" | ");
	if (pipe == std::string::npos)
		throw Date::IncorrectDateFormatException();
	dateStr = line.substr(0, pipe);
	value = line.substr(pipe + 3);

	Date date;
	float toExchange;
	try
	{
		date = Date(dateStr);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << dateStr << '\n';
		return;
	}
	try
	{
		toExchange = getToExchange(value);
		std::map<Date, float>::const_iterator it = _exchangeRates.lower_bound(date);
		std::map<Date, float>::const_iterator itaux = it;
		if (itaux->first != date && itaux != _exchangeRates.begin())
			itaux--;
		date.print();
		std::cout << " => " << toExchange << " = " << itaux->second * toExchange << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}

void BitcoinExchange::printExchange()
{
	std::string line;
	if (std::getline(_inputFile, line) && line != "date | value")
	{
		try {
			getExchange(line);
		} catch (const std::exception &e) {
			std::cout << e.what() << line << '\n';
		}
	}
	while(std::getline(_inputFile, line))
	{
		try {
			getExchange(line);
		} catch (const std::exception &e) {
			std::cout << e.what() << line << '\n';
		}
	}
}

const char* BitcoinExchange::FileNotFoundException::what() const throw() {
	return ("Error: could not open file.");
}

const char* BitcoinExchange::FileIncorrectFormatException::what() const throw() {
	return ("Error: the csv file has an incorrect format. Please, fix it");
}

const char* BitcoinExchange::NegativeNumberException::what() const throw() {
	return ("Error: not a positive number.");
}

const char* BitcoinExchange::TooLargeNumberException::what() const throw() {
	return ("Error: too large a number.");
}
