/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:47:42 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 17:28:20 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->setHitpoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << YEL "FragTrap " << this->getName() << " has been created with " GRN << this->getHitpoints() \
	<< " hitpoints, " BLU << this->getEnergyPoints() << " energy points and " RED << this->getAttackDamage() \
	<< " attack damage." NOCOL << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
	*this = copy;
	std::cout << YEL "FragTrap " << this->getName() << " has been created with " GRN << this->getHitpoints() \
	<< " hitpoints, " BLU << this->getEnergyPoints() << " energy points and " RED << this->getAttackDamage() \
	<< " attack damage." NOCOL << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << YEL "FragTrap " << this->getName() << " has been deleted" NOCOL << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap &copy) {
	if (this == &copy)
		return *this;
	this->setName(copy.getName());
	this->setHitpoints(copy.getHitpoints());
	this->setEnergyPoints(copy.getEnergyPoints());
	this->setAttackDamage(copy.getAttackDamage());
	return *this;
}

void FragTrap::highFivesGuys() {
	std::cout << YEL "FragTrap " << this->getName() << ": High Five Guys! We are the best!!!" NOCOL << std::endl;
}
