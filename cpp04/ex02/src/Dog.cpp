/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:46 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/14 13:44:46 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal(), _brain(new Brain()) {
	std::cout << BLU "A new puppy was born, cutieeee, welcome to this world! 🐶" NOCOL<< std::endl;
	this->setType("Dog");
}

Dog::Dog(const Dog &ref): AAnimal(ref) {
	*this = ref;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << BLU "This Dog was too old, it passed away 😟" NOCOL <<std::endl;
}

Dog &Dog::operator=(const Dog &ref) {
	if (this == &ref)
		return *this;
	this->setType(ref.getType());
	this->_brain = new Brain(*ref._brain);
	return *this;
}

void Dog::makeSound() const{
	std::cout << BLU "Woof Woof 🐶🐕" NOCOL << std::endl;
}
