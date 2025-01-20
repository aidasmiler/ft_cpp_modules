/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:09:51 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/25 17:39:32 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

void shrubberyF(Bureaucrat &bSign, Bureaucrat &bExec) {
	try {
		std::cout << GRN "Creating and Testing with a shrubbery form" NOCOL << std::endl;
		ShrubberyCreationForm form = ShrubberyCreationForm("oak");
		std::cout << form;
		std::cout << bSign << "is ";
		std::cout << PUR "signing shrubbery form..." NOCOL << std::endl;
		bSign.signForm(form);
		std::cout << bExec << "is ";
		std::cout << CYN "executing shrubbery form..." NOCOL << std::endl;
		form.execute(bExec);
		std::cout << GRN "the form was exectuted successfully!" NOCOL << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void robotomyF(Bureaucrat &bSign, Bureaucrat &bExec) {
	try {
		std::cout << GRN "Creating and Testing with a robotomy form" NOCOL << std::endl;
		RobotomyRequestForm form = RobotomyRequestForm();
		std::cout << form;
		std::cout << bSign << "is ";
		std::cout << PUR "Signing robotomy form..." NOCOL << std::endl;
		bSign.signForm(form);
		std::cout << bExec << "is ";
		std::cout << CYN "executing robotomy form..." NOCOL << std::endl;
		form.execute(bExec);
		std::cout << GRN "the form was exectuted successfully!" NOCOL << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void presidentialF(Bureaucrat &bSign, Bureaucrat &bExec) {
	try {
		std::cout << GRN "Creating and Testing with a presidential form" NOCOL << std::endl;
		PresidentialPardonForm form = PresidentialPardonForm();
		std::cout << form;
		std::cout << bSign << "is ";
		std::cout << PUR "Signing presidential form..." NOCOL << std::endl;
		bSign.signForm(form);
		std::cout << bExec << "is ";
		std::cout << CYN "executing presidential form..." NOCOL << std::endl;
		form.execute(bExec);
		std::cout << GRN "the form was exectuted successfully!" NOCOL << std::endl;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void testExec(Bureaucrat &exec, PresidentialPardonForm &presiForm) {
	try {
		std::cout << presiForm;
		std::cout << exec << "is ";
		std::cout << CYN "executing presidential form..." NOCOL << std::endl;
		presiForm.execute(exec);
		std::cout << GRN "the form was exectuted successfully!" NOCOL << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

int	main () {
	try {
		Bureaucrat pepito = Bureaucrat("Pepito", 150);
		Bureaucrat juanito = Bureaucrat("Juanito", 145);
		Bureaucrat jaimito = Bureaucrat("Jaimito", 72);
		Bureaucrat lolita = Bureaucrat("Lolita", 25);
		Bureaucrat cris = Bureaucrat("Cris", 1);
		PresidentialPardonForm presiForm = PresidentialPardonForm();
		shrubberyF(pepito, pepito);
		std::cout << std::endl;
		shrubberyF(juanito, juanito);
		std::cout << std::endl;
		shrubberyF(juanito, jaimito);
		std::cout << std::endl;
		robotomyF(juanito, juanito);
		std::cout << std::endl;
		robotomyF(jaimito, jaimito);
		std::cout << std::endl;
		robotomyF(jaimito, lolita);
		std::cout << std::endl;
		presidentialF(jaimito, jaimito);
		std::cout << std::endl;
		presidentialF(lolita, lolita);
		std::cout << std::endl;
		presidentialF(lolita, cris);
		std::cout << std::endl;
		robotomyF(jaimito, lolita);
		std::cout << std::endl;
		testExec(cris, presiForm);
		cris.signForm(presiForm);
		testExec(cris, presiForm);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
