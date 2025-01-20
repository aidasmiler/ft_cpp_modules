/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:30:23 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/24 16:42:23 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int value;
	const static int bits = 8;
public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	void operator = (const Fixed &copy);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
