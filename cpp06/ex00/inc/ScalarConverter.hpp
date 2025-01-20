/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:46:02 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/28 17:54:14 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <limits>
class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &ref);
	public:
		ScalarConverter &operator=(const ScalarConverter &ref);
		~ScalarConverter();
		static void convert(const std::string &toConvert);
		static void toInt(const float &f);
		static void toChar(const float &f);
		static float toFloat(const std::string &toConvert);
		static void toDouble(const float &f, const float &dec);
};

#endif
