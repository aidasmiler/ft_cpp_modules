/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:30:25 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/02 15:32:19 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "Testing comparison operators" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "a < b ?: " << (a < b) << std::endl;
	std::cout << "a < a ?: " << (a < a) << std::endl;
	std::cout << "a <= b ?: " << (a <= b) << std::endl;
	std::cout << "a <= a ?: " << (a <= a) << std::endl;
	std::cout << "a > b ?: " << (a > b) << std::endl;
	std::cout << "a > a ?: " << (a > a) << std::endl;
	std::cout << "a >= b ?: " << (a >= b) << std::endl;
	std::cout << "a >= a ?: " << (a >= a) << std::endl;
	std::cout << "a == b ?: " << (a == b) << std::endl;
	std::cout << "a == a ?: " << (a == a) << std::endl;
	std::cout << "a != b ?: " << (a != b) << std::endl;
	std::cout << "a != a ?: " << (a != a) << std::endl;
	std::cout << std::endl;
	std::cout << "Testing arithmetic operators" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a - a = " << (a - a) << std::endl;
	std::cout << "b - a = " << (b - a) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;
	std::cout << "a / a = " << (a / a) << std::endl;
	std::cout << "b / a = " << (b / a) << std::endl;
	std::cout << std::endl;
	std::cout << "Testing pre/pos increment/decrement operators" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << (--a) << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl;
	std::cout << "Testing max and min functions" << std::endl;
	std::cout << "max(a, b) = " << Fixed::max(a, b ) << std::endl;
	std::cout << "max(b, a) = " << Fixed::max(b, a) << std::endl;
	std::cout << "max(a, a) = " << Fixed::max(a, a) << std::endl;
	std::cout << "max(b, b) = " << Fixed::max(b, b) << std::endl;
	std::cout << "min(a, b) = " << Fixed::min(a, b ) << std::endl;
	std::cout << "min(b, a) = " << Fixed::min(b, a) << std::endl;
	std::cout << "min(a, a) = " << Fixed::min(a, a) << std::endl;
	std::cout << "min(b, b) = " << Fixed::min(b, b) << std::endl;
	return 0;
}

