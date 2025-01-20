/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:10:59 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/04 00:21:58 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat(): _name("npc"), _grade(150) {

}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref): _name(ref.getName()) {
	*this = ref;
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref) {
	if (this == &ref)
		return *this;
	this->_grade = ref._grade;
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return (RED "You can't get higher! Maximum is 1" NOCOL);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return (RED "You can't get lower! Minimum is 150" NOCOL);
}

std::string Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::incrementGrade() {
	if (this->getGrade() == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->getGrade() == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream &operator<<(std::ostream &print, const Bureaucrat &bureaucrat) {
	print << BLU << bureaucrat.getName() << ", bureaucrat grade " <<
			bureaucrat.getGrade() << "." NOCOL << std::endl;
	return print;
}
