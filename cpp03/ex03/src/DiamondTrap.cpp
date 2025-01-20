/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:29:10 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 17:44:08 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap(){
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav"), FragTrap(name + "_frag"){
	this->_name = name;
	// ClapTrap::setName(name.append("_clap_name"));
	this->_hitpoints = FragTrap::_hits;
	this->_energyPoints = ScavTrap::_energy;
	this->_attackDamage = FragTrap::_attack;
	std::cout << BLU "DiamondTrap " << this->_name << " has been created with " GRN << this->_hitpoints \
	<< " hitpoints, " BLU << this->_energyPoints << " energy points and " RED << this->_attackDamage \
	<< " attack damage." NOCOL << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
	*this = copy;
	std::cout << BLU "DiamondTrap " << this->_name << " has been created with " GRN << this->_hitpoints \
	<< " hitpoints, " BLU << this->_energyPoints << " energy points and " RED << this->_attackDamage \
	<< " attack damage." NOCOL << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << BLU "DiamondTrap " << this->_name << " has been deleted" NOCOL << std::endl;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap &copy) {
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}

void DiamondTrap::attack(std::string const &target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << BLU "DiamondTrap " << this->_name << ": I'm a Diamond!" << std::endl << \
	"I have " GRN << this->_hitpoints << " hitpoints, " BLU << this->_energyPoints << \
	" energy points and " RED << this->_attackDamage << " attack damage." NOCOL << std::endl \
	<< NOCOL " My ClapTrap is " << ClapTrap::_name << std::endl;
}
