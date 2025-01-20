/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:30:23 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/28 12:06:28 by airodrig         ###   ########.fr       */
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
	Fixed();
	Fixed(const Fixed &copy);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();
	Fixed &operator = (const Fixed &copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};
std::ostream &operator<<(std::ostream &print, const Fixed &toPrint);

#endif
