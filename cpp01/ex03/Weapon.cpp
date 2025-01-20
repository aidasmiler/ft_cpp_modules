/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:28:53 by airodrig          #+#    #+#             */
/*   Updated: 2023/04/12 11:01:02 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon() {

}

std::string Weapon::getType(){
	const std::string &typeRef = this->type;
	return typeRef;
}

void Weapon::setType(std::string newType) {
	this->type = newType;
}
