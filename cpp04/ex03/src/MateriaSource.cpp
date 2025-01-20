/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:59:24 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/03 20:45:11 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < MAX_MATERIAS; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ref) {
	*this = ref;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &ref) {
	if (this == &ref)
		return *this;
	this->deleteEverything();
	for (int i = 0; i < MAX_MATERIAS; i++)
		this->_inventory[i] = ref._inventory[i];
	return *this;
}

void MateriaSource::deleteEverything() {
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

MateriaSource::~MateriaSource() {
	this->deleteEverything();
}

void MateriaSource::learnMateria(AMateria *ref) {
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = ref;
			break;
		}
	}
}
AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < MAX_MATERIAS; ++i) {
		if (this->_inventory[i] && !this->_inventory[i]->getType().compare(type))
			return this->_inventory[i]->clone();
	}
	return 0;
}


