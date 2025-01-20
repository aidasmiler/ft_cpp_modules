/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:47:42 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 17:27:38 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << YEL "FragTrap " << this->_name << " has been created with " GRN << this->_hitpoints \
	<< " hitpoints, " BLU << this->_energyPoints << " energy points and " RED << this->_attackDamage \
	<< " attack damage." NOCOL << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
	*this = copy;
	std::cout << YEL "FragTrap " << this->_name << " has been created with " GRN << this->_hitpoints \
	<< " hitpoints, " BLU << this->_energyPoints << " energy points and " RED << this->_attackDamage \
	<< " attack damage." NOCOL << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << YEL "FragTrap " << this->_name << " has been deleted" NOCOL << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap &copy) {
	if (this == &copy)
		return *this;
	this->_name = copy._name;
	this->_hitpoints = copy._hitpoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << YEL "FragTrap " << this->_name << ": High Five Guys! We are the best!!!" NOCOL << std::endl;
}
