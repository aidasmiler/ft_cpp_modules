/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:03:02 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/25 18:12:13 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(const Intern &ref) {
	*this = ref;
}

Intern &Intern::operator=(const Intern &ref){
	if (this == &ref)
		return *this;
	return *this;
}

Form *Intern::makeForm(std::string name, std::string target) {
	std::string options[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form *forms[3]= { new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target) };
	Form *toRt = NULL;
	for (int i = 0; i < 3; i++) {
		if (!name.compare(options[i]))
			toRt = forms[i];
		else
			delete forms[i];
	}
	if (!toRt)
		throw Form::FormNotKnownException();
	return toRt;
}
