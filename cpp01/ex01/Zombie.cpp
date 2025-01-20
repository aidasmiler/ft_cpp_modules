/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:30:54 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/16 18:52:05 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << RED << this->name << " was shot in the head 🧟😵" << NOCOL << std::endl;
}

void Zombie::announce() {
	std::cout << YEL << this->name << ": BraiiiiiiinnnzzzZ..." << NOCOL << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}
