/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:57:45 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 17:37:09 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << CYN "ScavTrap " << this->_name << " has been created with " GRN << this->_hitpoints \
	<< " hitpoints, " BLU << this->_energyPoints << " energy points and " RED << this->_attackDamage \
	<< " attack damage." NOCOL << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy) {
	*this = copy;
	std::cout << CYN "ScavTrap " << this->_name << " has been created with " GRN << this->_hitpoints \
	<< " hitpoints, " BLU << this->_energyPoints << " energy points and " RED << this->_attackDamage \
	<< " attack damage." NOCOL << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << CYN "ScavTrap " << this->_name << " has been deleted" NOCOL << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &copy) {
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}

void ScavTrap::attack(std::string const &target) {
		if (this->_energyPoints <= 0) {
		std::cout << BLU "The ScavTrap " << this->_name << " does not have any more energy points" << NOCOL << std::endl;
		return;
	}
	if (this->_hitpoints <= 0) {
		std::cout << RED "ScavTrap " << this->_name << " is dead, it cannot attack ☠️" << NOCOL << std::endl;
		return;
	}
	std::cout << CYN "ScavTrap " << this->_name << " attack " << target << ", causing " RED << this->_attackDamage << " points of damage!" NOCOL << std::endl;
	std::cout << CYN "ScavTrap " << this->_name << " now has " BLU << --this->_energyPoints << " energy points." NOCOL << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << CYN "ScavTrap " << this->_name << " has entered gatekeeper mode!" NOCOL << std::endl;
}
