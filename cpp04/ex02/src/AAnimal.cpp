/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:46 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/14 13:42:15 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "A new Aanimal was born, welcome to this world!"<< std::endl;
}

AAnimal::AAnimal(const AAnimal &ref) {
	*this = ref;
}

AAnimal::~AAnimal() {
	std::cout << "This Aanimal was too old, it passed away :(" <<std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &ref) {
	if (this == &ref)
		return *this;
	this->setType(ref.getType());
	return *this;
}

std::string AAnimal::getType() const {
	return this->type;
}

void AAnimal::setType(std::string type) {
	this->type = type;
}

void AAnimal::makeSound() const{
	std::cout << "hi" << std::endl;
}
