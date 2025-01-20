/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:44:37 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/02 15:39:58 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;

public:
	// Constructors & Destructors
	Point();
	Point(const Point &copy);
	Point(const float x, const float y);
	~Point();
	// Operators
	Point &operator=(const Point &p);
	// Setters & Getters
	Fixed getX() const;
	Fixed getY() const;
};


#endif