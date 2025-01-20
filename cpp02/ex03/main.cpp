/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:30:25 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/02 09:58:19 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

// Online checker: https://planetcalc.com/8108/

int main(void) {
	std::cout << "Triangle with a point inside" << std::endl;
	std::cout << "a = (-1, 0) b = (0, 1) c = (1, 0), point = (0, 0.5)" << std::endl;
	bool result = bsp(Point(-1, 0), Point(0, 1), Point(1, 0), Point(0, 0.5));
	std::cout << "result: " << (result ? "Inside" : "Outside") << std::endl;

	std::cout << "Triangle with a point outside" << std::endl;
	std::cout << "a = (-1, 0) b = (0, 1) c = (1, 0), point = (-0.5, 1)" << std::endl;
	result = bsp(Point(-1, 0), Point(0, 1), Point(1, 0), Point(-0.5, 1));
	std::cout << "result: " << (result ? "Inside" : "Outside") << std::endl;

	std::cout << "Triangle with a point in the border" << std::endl;
	std::cout << "a = (-1, 0) b = (0, 1) c = (1, 0), point = (-0.5, 0)" << std::endl;
	result = bsp(Point(-1, 0), Point(0, 1), Point(1, 0), Point(-0.5, 0));
	std::cout << "result: " << (result ? "Inside" : "Outside") << std::endl;

	std::cout << "Other triangle with a point inside" << std::endl;
	std::cout << "a = (5.67, 23.12) b = (8.34, 30) c = (10.43, 18.78), point = (8.63, 25.47)" << std::endl;
	result = bsp(Point(5.67f, 23.12f), Point(8.34f, 30), Point(10.43f, 18.78f), Point(8.63f, 25.47f));
	std::cout << "result: " << (result ? "Inside" : "Outside") << std::endl;

	std::cout << "Triangle with a point in the border" << std::endl;
	std::cout << "a = (-1, 0) b = (0, 1) c = (1, 0), point = (-0.5, 0.01)" << std::endl;
	result = bsp(Point(-1, 0), Point(0, 1), Point(1, 0), Point(-0.5, 0.01));
	std::cout << "result: " << (result ? "Inside" : "Outside") << std::endl;
}
