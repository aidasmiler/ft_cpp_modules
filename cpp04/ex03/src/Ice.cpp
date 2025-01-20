/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:17:19 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/29 15:22:13 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {

}

Ice::Ice(const Ice &ref): AMateria(ref){
	*this = ref;
}

Ice::~Ice() {

}

Ice &Ice::operator=(const Ice &ref) {
	if (this == &ref)
		return *this;
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << BLU "* shoots an ice bolt at " << target.getName() << " *" NOCOL << std::endl ;
}
