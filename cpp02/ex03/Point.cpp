/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:44:47 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/27 18:58:25 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(Fixed(0)), y(Fixed(0)) {
}


Point::Point(const Point &copy): x(copy.getX()), y(copy.getY()) {
}

Point::Point(const float x, const float y): x(x), y(y) {
}

Point::~Point() {
}

Point &Point::operator=(const Point &p) {
	if (this == &p)
		return (*this);
	return (*this);
}

Fixed Point::getX() const {
	return this->x;
}

Fixed Point::getY() const {
	return this->y;
}
