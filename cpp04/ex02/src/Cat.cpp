/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:46 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/14 13:43:41 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal(), _brain(new Brain()) {
	std::cout << ORG "A new kitty was born, how cuuuuuute, welcome to this world! 😺" NOCOL << std::endl;
	this->setType("Cat");
}

Cat::Cat(const Cat &ref): AAnimal(ref) {
	*this = ref;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << ORG "This cat was too old, it passed away 😿" NOCOL <<std::endl;
}

Cat &Cat::operator=(const Cat &ref) {
	if (this == &ref)
		return *this;
	this->setType(ref.getType());
	this->_brain = new Brain(*ref._brain);
	return *this;
}

void Cat::makeSound() const {
	std::cout << ORG "Meow Meow 🐈😺" NOCOL << std::endl;
}
