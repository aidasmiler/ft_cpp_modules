/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:30:19 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/28 12:06:22 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
////////////////////////////////////////////////////////////////////////////////
// Constructors & Destructor
////////////////////////////////////////////////////////////////////////////////
Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n << this->bits);
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(n * (1 << this->bits)));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////
// Member operators
////////////////////////////////////////////////////////////////////////////////

Fixed &Fixed::operator=(const Fixed &n) {
	if (this == &n)
		return (*this);
	this->setRawBits(n.getRawBits());
	return (*this);
}

////////////////////////////////////////////////////////////////////////////////
// Getters & Setters
////////////////////////////////////////////////////////////////////////////////

int Fixed::getRawBits() const{
	return this->value;
}

void Fixed::setRawBits(int const raw) {
	this->value = raw;
}

////////////////////////////////////////////////////////////////////////////////
// Miscellaneous
////////////////////////////////////////////////////////////////////////////////

float Fixed::toFloat(void) const{
	return((float)this->value / (1 << this->bits));
}

int Fixed::toInt(void) const{
	return (this->value >> this->bits);
}

////////////////////////////////////////////////////////////////////////////////
// Non member operators
////////////////////////////////////////////////////////////////////////////////

std::ostream &operator<<(std::ostream &print, const Fixed &toPrint){
	print << toPrint.toFloat();
	return print;
}