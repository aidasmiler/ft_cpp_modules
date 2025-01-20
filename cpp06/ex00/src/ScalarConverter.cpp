/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:45:50 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/29 19:29:13 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter &ref) {
	*this = ref;
}

ScalarConverter::~ScalarConverter(){
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ref) {
	if (this == &ref)
		return *this;
	return *this;
}

void ScalarConverter::toInt(const float &f) {
	int i = static_cast<int>(f);
	if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max() || std::isnan(f) || std::isinf(f))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

void ScalarConverter::toChar(const float &f) {
	char c = static_cast<char>(f);
	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else if (std::isnan(f) || std::isinf(f))
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
}

float ScalarConverter::toFloat(const std::string &toConvert) {
	float f = std::atof(toConvert.c_str());
	return static_cast<float>(f);
}

void ScalarConverter::toDouble(const float &f, const float &dec) {
	double d = static_cast<double>(f);
	if (std::isinf(f))
		std::cout << "double: " << f << std::endl;
	else
		std::cout << "double: " << d << (!dec ? ".0" : "" )<< std::endl;
}

void ScalarConverter::convert(const std::string &toConvert) {
	float f, dec, n;
	if (toConvert.length() > 1 && !isdigit(toConvert[0]) && toConvert[0] != '-') {
		if (toConvert == "nan" || toConvert == "nanf" || toConvert == "inf" ||\
			toConvert == "inff" || toConvert == "-inf" || toConvert == "-inff"||\
			toConvert == "+inf" || toConvert == "+inff");
		else {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return;
		}
	}
	if (toConvert.length() == 1 && !isdigit(toConvert[0])) {
		ScalarConverter::toChar(toConvert[0]);
		f = static_cast<float>(toConvert[0]);
	}
	else {
		f = ScalarConverter::toFloat(toConvert);
		ScalarConverter::toChar(f);
	}
	dec = std::modf(f, &n);
	ScalarConverter::toInt(f);
	if (std::isinf(f))
		std::cout << "float: " << f << "f" << std::endl;
	else
		std::cout << "float: " << f << (!dec ? ".0f" : "f" )<< std::endl;
	ScalarConverter::toDouble(f, dec);
}
