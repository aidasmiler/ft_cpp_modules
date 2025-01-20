/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:14:41 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 17:11:11 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "ClapTrap " << this->_name << " has been created with " GRN << this->_hitpoints \
	<< " hitpoints, " BLU << this->_energyPoints << " energy points and " RED << this->_attackDamage \
	<< " attack damage." NOCOL << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	*this = copy;
	std::cout << "ClapTrap " << this->_name << " has been created with " GRN << this->_hitpoints \
	<< " hitpoints, " BLU << this->_energyPoints << " energy points and " RED << this->_attackDamage \
	<< " attack damage." NOCOL << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " has been deleted" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &copy) {
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}

std::string ClapTrap::getName() const {
	return this->_name;
}

int ClapTrap::getHitpoints() const {
	return this->_hitpoints;
}

int ClapTrap::getEnergyPoints() const {
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const {
	return this->_attackDamage;
}

void ClapTrap::setName(std::string name) {
	this->_name = name;
}

void ClapTrap::setHitpoints(int hitpoints) {
	this->_hitpoints = hitpoints;
}

void ClapTrap::setEnergyPoints(int energyPoints) {
	this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage) {
	this->_attackDamage = attackDamage;
}

void ClapTrap::attack(std::string const &target) {
	if (this->_energyPoints <= 0) {
		std::cout << BLU "The claptrap " << this->_name << " does not have any more energy points" << NOCOL << std::endl;
		return;
	}
	if (this->_hitpoints <= 0) {
		std::cout << RED "ClapTrap " << this->_name << " is dead, it cannot attack ☠️" << NOCOL << std::endl;
		return;
	}
	std::cout << PUR "ClapTrap " << this->_name << " attack " << target << ", causing " RED << this->_attackDamage << " points of damage!" NOCOL << std::endl;
	std::cout << "ClapTrap " << this->_name << " now has " BLU << --this->_energyPoints << " energy points." NOCOL << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitpoints <= 0) {
		std::cout << RED "ClapTrap " << this->_name << " is dead ☠️" << NOCOL << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << ", with " GRN << this->_hitpoints << " hitpoints got " RED << amount << " points of damage." NOCOL << std::endl;
	this->_hitpoints -= amount;
	std::cout << "ClapTrap " << this->_name << " now has " BLU << this->_hitpoints << " hitpoints." NOCOL << std::endl;
	if (this->_hitpoints <= 0)
		std::cout << RED "ClapTrap " << this->_name << " was killed 😵☠️" NOCOL << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints <= 0) {
		std::cout << BLU "The claptrap " << this->_name << " does not have any more energy points" << NOCOL << std::endl;
		return;
	}
	if (this->_hitpoints <= 0) {
		std::cout << RED "ClapTrap " << this->_name << " is dead, it cannot save itself ☠️" << NOCOL << std::endl;
		return;
	}
	this->_hitpoints += amount;
	std::cout << GRN "ClapTrap " << this->_name << " got repaired with " << amount << " points." NOCOL << std::endl;
	std::cout << "ClapTrap " << this->_name << " has now " GRN << this->_hitpoints << " hitpoints." NOCOL << std::endl;
	std::cout << "ClapTrap " << this->_name << " has now " BLU << --this->_energyPoints << " energy points." NOCOL << std::endl;
}

