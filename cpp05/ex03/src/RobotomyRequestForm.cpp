/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:56:05 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/25 17:31:56 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request", 72, 45), _target("none") {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) : Form(ref) {
	*this = ref;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref) {
	if (this == &ref)
		return *this;
	this->_target = ref._target;
	return *this;
}

std::string RobotomyRequestForm::getTarget() const {
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	this->execChecker(executor);
	std::cout << BLU "* some drilling noises... * " NOCOL << std::endl;
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << this->getTarget() << BLU " has been robotomized successfully!" NOCOL << std::endl;
	else
		std::cout << "Robotomization failed." << std::endl;
}
