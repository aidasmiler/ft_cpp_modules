/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:46 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 18:20:39 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "A new WrongAnimal was born, welcome to this world!"<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref) {
	*this = ref;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "This WrongAnimal was too old, it passed away :(" <<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref) {
	if (this == &ref)
		return *this;
	this->setType(ref.getType());
	return *this;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::setType(std::string type) {
	this->type = type;
}

void WrongAnimal::makeSound() const{
	std::cout << "hooooooooo" << std::endl;
}
