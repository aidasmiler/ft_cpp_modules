/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:15:15 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/11 15:59:17 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << PUR "New brain created 🧠" NOCOL << std::endl;
}

Brain::~Brain() {
	std::cout << PUR "Brain lost all its neurons 🤯" NOCOL << std::endl;
}

Brain::Brain(const Brain &ref) {
	*this = ref;
}

Brain &Brain::operator=(const Brain &ref) {
	if (this == &ref)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ref.ideas[i];
	return *this;
}
