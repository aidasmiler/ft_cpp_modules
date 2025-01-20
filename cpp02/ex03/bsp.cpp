/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:49:46 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/02 09:57:36 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed area(Point const p1, Point const p2, Point const p3) {
	Fixed area = ((p1.getX() * (p2.getY() - p3.getY())) + (p2.getX() * \
	(p3.getY() - p1.getY())) + (p3.getX() * (p1.getY() - p2.getY()))) / Fixed(2);
	if (area < 0)
		return area * Fixed(-1);
	return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed ogTriangle = area (a, b, c);
	Fixed t1 = area (point, b, c);
	Fixed t2 = area (a, point, c);
	Fixed t3 = area (a, b, point);
	if (t1 == Fixed(0) || t2 == Fixed(0) || t3 == Fixed(0))
		return false;
	return (ogTriangle == (t1 + (t2 + t3)));
}
