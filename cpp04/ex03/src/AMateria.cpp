/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:46:19 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/29 15:26:06 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {

}

AMateria::AMateria(std::string const &type): _type(type) {

}

AMateria::AMateria(const AMateria &ref) {
	*this = ref;
}

AMateria::~AMateria() {

}

AMateria &AMateria::operator=(const AMateria &ref) {
	if (this == &ref)
		return *this;
	this->_type = ref._type;
	return *this;
}

std::string const &AMateria::getType() const {
	return this->_type;
}

void AMateria::setType(std::string const &type) {
	this->_type = type;
}

void AMateria::use(ICharacter &target) {
	(void) target;
}
