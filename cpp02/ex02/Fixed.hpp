/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:30:23 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/28 12:06:45 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int value;
	const static int bits = 8;
public:
	// Constructors & Destructors
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();
	// Operators
	Fixed &operator=(const Fixed &n);
	bool operator>(const Fixed &n2) const;
	bool operator<(const Fixed &n2) const;
	bool operator>=(const Fixed &n2) const;
	bool operator<=(const Fixed &n2) const;
	bool operator==(const Fixed &n2) const;
	bool operator!=(const Fixed &n2) const;
	Fixed operator+(const Fixed &n2) const;
	Fixed operator-(const Fixed &n2) const;
	Fixed operator*(const Fixed &n2) const;
	Fixed operator/(const Fixed &n2) const;
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);
	// Miscellaneous
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static Fixed &min(Fixed &n1, Fixed &n2);
	static Fixed &max(Fixed &n1, Fixed &n2);
	static const Fixed &min(const Fixed &n1, const Fixed &n2);
	static const Fixed &max(const Fixed &n1, const Fixed &n2);
};

std::ostream &operator<<(std::ostream &print, const Fixed &toPrint);

#endif
