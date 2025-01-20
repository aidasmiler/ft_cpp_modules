/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:46 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 18:26:23 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << ORG "A new wrongcat was born, welcome to this world! 😺" NOCOL << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(const WrongCat &ref): WrongAnimal(ref) {
	*this = ref;
}

WrongCat::~WrongCat() {
	std::cout << ORG "This wrongcat was too old, it passed away 😿" NOCOL <<std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &ref) {
	if (this == &ref)
		return *this;
	this->setType(ref.getType());
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << ORG "Meeeeeeew Meeeeeew 🐈😺" NOCOL << std::endl;
}
