/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:30:01 by airodrig          #+#    #+#             */
/*   Updated: 2023/04/12 20:12:04 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack(){
	if (this->weapon)
		std::cout << this->name << RED << " attacks with their " \
	<< BLU << this->weapon->getType() << NOCOL << std::endl;
	else
		std::cout << this->name << YEL << " cannot attack" << NOCOL << std::endl;
}
