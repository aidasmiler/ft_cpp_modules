/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:52:56 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/25 13:05:56 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form(): _name("Standard"), _signed(false), _signGrade(150), _execGrade(100) {

}

Form::Form(std::string name, int signGrade, int execGrade): _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade) {
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &ref): _name(ref.getName()), _signGrade(ref.getSignGrade()), _execGrade(ref.getExecGrade()) {
	*this = ref;
}

Form &Form::operator=(const Form &ref) {
	if (this == &ref)
		return *this;
	this->_signed = ref._signed;
	return *this;
}

Form::~Form() {

}

const char* Form::GradeTooHighException::what() const throw() {
	return (RED "The grade for this operation is higher." NOCOL);
}

const char* Form::GradeTooLowException::what() const throw() {
	return (RED "The grade for this operation is lower." NOCOL);
}

const char* Form::FormNotSignedException::what() const throw() {
	return (RED "Cannot perform this operation. The form is not signed." NOCOL);
}

std::string Form::getName() const {
	return this->_name;
}

bool Form::isSigned() const {
	return this->_signed;
}

int Form::getSignGrade() const {
	return this->_signGrade;
}

int Form::getExecGrade() const {
	return this->_execGrade;
}

void Form::beSigned(Bureaucrat &b) {
	if (this->getSignGrade() < b.getGrade())
		throw Form::GradeTooLowException();
	this->_signed = true;
}

void Form::checkExecGrade(Bureaucrat const &b) const {
	if (this->getExecGrade() < b.getGrade())
		throw Form::GradeTooLowException();
}

void Form::checkIsSigned() const {
	if (!this->isSigned())
		throw Form::FormNotSignedException();
}

void Form::execChecker(Bureaucrat const &b) const {
	this->checkExecGrade(b);
	this->checkIsSigned();
}

std::ostream &operator<<(std::ostream &print, const Form &form) {
	print << BLU << form.getName() << " form is " <<
		(form.isSigned() ? "signed. " : "not signed. ") <<
		"The grade required to be signed is: " << form.getSignGrade() <<
		" and the grade required to be executed is: " << form.getExecGrade() <<
		 "." NOCOL << std::endl;
	return print;
}
