/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:17:27 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/28 16:56:11 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {

}

Cure::Cure(const Cure &ref) : AMateria(ref) {
	*this = ref;
}

Cure::~Cure() {

}

Cure &Cure::operator=(const Cure &ref) {
	if (this == &ref)
		return *this;
	return *this;
}

AMateria *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	std::cout << GRN "* heals " << target.getName() << "'s wounds *" NOCOL << std::endl;
}
