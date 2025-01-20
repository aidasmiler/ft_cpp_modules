/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:46 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/09 19:24:37 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "A new animal was born, welcome to this world!"<< std::endl;
}

Animal::Animal(const Animal &ref) {
	*this = ref;
}

Animal::~Animal() {
	std::cout << "This animal was too old, it passed away :(" <<std::endl;
}

Animal &Animal::operator=(const Animal &ref) {
	if (this == &ref)
		return *this;
	this->setType(ref.getType());
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::setType(std::string type) {
	this->type = type;
}

void Animal::makeSound() const{
	std::cout << "hi" << std::endl;
}
