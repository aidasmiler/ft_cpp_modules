/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:52:19 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/25 17:31:49 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 25, 5), _target("none") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref) {
	*this = ref;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ref) {
	if (this == &ref)
		return *this;
	this->_target = ref._target;
	return *this;
}

std::string PresidentialPardonForm::getTarget() const {
	return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	this->execChecker(executor);
	std::cout << ORG "ATTENTION! " << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." NOCOL << std::endl;
}

