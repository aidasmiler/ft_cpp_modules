/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:35:32 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/17 20:08:48 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {

}

Character::Character(std::string name): _name(name) {
	for(int i = 0; i < MAX_MATERIAS; i++)
		this->_inventory[i] = NULL;
	for(int i = 0; i < MAX_ADDRESSES; i++)
		this->_inventoryAddresses[i] = NULL;
}

Character::Character(const Character &ref) {
	*this = ref;
}

Character &Character::operator=(const Character &ref) {
	if (this == &ref)
		return *this;
	this->_name = ref._name;
	this->deleteEverything();
	for (int i =  0; i < MAX_MATERIAS; i++) {
		if (this->_inventory[i])
			this->_inventory[i] = ref._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return *this;
}

void Character::deleteEverything() {
	for (int i = 0; i < MAX_MATERIAS; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
	for(int i = 0; i < MAX_ADDRESSES; i++)
		if (this->_inventoryAddresses[i])
			delete this->_inventoryAddresses[i];
}


Character::~Character() {
	this->deleteEverything();
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	for(int i = 0; i < MAX_MATERIAS; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m->clone();
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < MAX_MATERIAS && this->_inventory[idx] != NULL) {
		int i = 0;
		while (this->_inventoryAddresses[i] != 0)
			i++;
		this->_inventoryAddresses[i] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < MAX_MATERIAS && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
