/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:30:19 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/28 12:06:38 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
////////////////////////////////////////////////////////////////////////////////
// Constructors & Destructor
////////////////////////////////////////////////////////////////////////////////

Fixed::Fixed() {
	this->value = 0;
}

Fixed::Fixed(const Fixed &copy){
	*this = copy;
}

Fixed::Fixed(const int n){
	this->setRawBits(n << this->bits);
}

Fixed::Fixed(const float n) {
	this->setRawBits((int)roundf(n * (1 << this->bits)));
}

Fixed::~Fixed() {
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

bool Fixed::operator>(const Fixed &n2) const {
	return (this->toFloat() > n2.toFloat());
}

bool Fixed::operator<(const Fixed &n2) const {
	return (this->toFloat() < n2.toFloat());
}

bool Fixed::operator>=(const Fixed &n2) const {
	return (this->toFloat() >= n2.toFloat());
}

bool Fixed::operator<=(const Fixed &n2) const {
	return (this->toFloat() <= n2.toFloat());
}

bool Fixed::operator==(const Fixed &n2) const {
	return (this->toFloat() == n2.toFloat());
}

bool Fixed::operator!=(const Fixed &n2) const {
	return (this->toFloat() != n2.toFloat());
}

Fixed Fixed::operator+(const Fixed &n2) const {
	return(Fixed(this->toFloat() + n2.toFloat()));
}

Fixed Fixed::operator-(const Fixed &n2) const {
	return(Fixed(this->toFloat() - n2.toFloat()));
}

Fixed Fixed::operator*(const Fixed &n2) const {
	return(Fixed(this->toFloat() * n2.toFloat()));
}

Fixed Fixed::operator/(const Fixed &n2) const {
	return(Fixed(this->toFloat() / n2.toFloat()));
}

Fixed Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed old = *this;
	this->operator++();
	return old;
}


Fixed Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed old = *this;
	this->operator--();
	return old;
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

Fixed &Fixed::min(Fixed &n1, Fixed &n2) {
	if (n1 < n2)
		return n1;
	return n2;
}

Fixed &Fixed::max(Fixed &n1, Fixed &n2) {
	if (n1 > n2)
		return n1;
	return n2;
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2) {
	if (n1.toFloat() < n2.toFloat())
		return n1;
	return n2;
}

const Fixed &Fixed::max(const Fixed &n1, const Fixed &n2) {
	if (n1.toFloat() > n2.toFloat())
		return n1;
	return n2;
}


////////////////////////////////////////////////////////////////////////////////
// Non member operators
////////////////////////////////////////////////////////////////////////////////

std::ostream &operator<<(std::ostream &print, const Fixed &toPrint){
	print << toPrint.toFloat();
	return print;
}
