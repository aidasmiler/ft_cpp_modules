/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:09:51 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/04 01:39:18 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

void incrementBureaucrat(Bureaucrat &b) {
	try {
		std::cout << ORG "Incrementing " << b.getName() << "..." NOCOL << std::endl;
		b.incrementGrade();
		std::cout << b;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void decrementBureaucrat(Bureaucrat &b) {
	try {
		std::cout << PUR "Decrementing " << b.getName() << "..." NOCOL << std::endl;
		b.decrementGrade();
		std::cout << b;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}
void pepito() {
	try {
		std::cout << GRN "Creating and Testing with Pepito (grade 1)..." NOCOL << std::endl;
		Bureaucrat pepito = Bureaucrat("Pepito", 1);
		std::cout << "This is " << pepito;
		std::cout << GRN "Creating and Testing with a standard form: signGrade 150, execGrade 100..." NOCOL << std::endl;
		Form standard = Form();
		std::cout << standard;
		std::cout << PUR "Signing standard form..." NOCOL << std::endl;
		pepito.signForm(standard);
		std::cout << GRN "Creating and Testing with a privileged form: signGrade 13, execGrade 3..." NOCOL << std::endl;
		Form privileged =  Form("Privileged", 13, 3);
		std::cout << privileged;
		std::cout << PUR "Signing privileged form..." NOCOL << std::endl;
		pepito.signForm(privileged);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void lucas() {
	try {
		std::cout << GRN "Creating and Testing with Lucas (grade 150)..." NOCOL << std::endl;
		Bureaucrat lucas = Bureaucrat("Lucas", 150);
		std::cout << "This is " << lucas;
		std::cout << GRN "Creating and Testing with a standard form: signGrade 150, execGrade 100..." NOCOL << std::endl;
		Form standard = Form();
		std::cout << standard;
		std::cout << PUR "Signing standard form..." NOCOL << std::endl;
		lucas.signForm(standard);
		std::cout << GRN "Creating and Testing with a privileged form: signGrade 13, execGrade 3..." NOCOL << std::endl;
		Form privileged =  Form("Privileged", 13, 3);
		std::cout << privileged;
		std::cout << PUR "Signing privileged form..." NOCOL << std::endl;
		lucas.signForm(privileged);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void cristina() {
	try {
		std::cout << GRN "Creating and Testing with Cristina (grade 13)..." NOCOL << std::endl;
		Bureaucrat cristina = Bureaucrat("Cristina", 13);
		std::cout << "This is " << cristina;
		std::cout << GRN "Creating and Testing with a standard form: signGrade 150, execGrade 100..." NOCOL << std::endl;
		Form standard = Form();
		std::cout << standard;
		std::cout << PUR "Signing standard form..." NOCOL << std::endl;
		cristina.signForm(standard);
		std::cout << GRN "Creating and Testing with a privileged form: signGrade 13, execGrade 3..." NOCOL << std::endl;
		Form privileged =  Form("Privileged", 13, 3);
		std::cout << privileged;
		cristina.signForm(privileged);
		std::cout << PUR "Signing privileged form..." NOCOL << std::endl;
		std::cout << privileged;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void wrongForm1() {
	try
	{
		std::cout << GRN "Creating and Testing with a wrong form: signGrade 0, execGrade 2..." NOCOL << std::endl;
		Form test =  Form("test", 0, 2);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void wrongForm2() {
	try
	{
		std::cout << GRN "Creating and Testing with a wrong form: signGrade 2, execGrade 0..." NOCOL << std::endl;
		Form test =  Form("test", 2, 0);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void wrongForm3() {
	try
	{
		std::cout << GRN "Creating and Testing with a wrong form: signGrade 151, execGrade 2..." NOCOL << std::endl;
		Form test =  Form("test", 151, 2);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void wrongForm4() {
	try
	{
		std::cout << GRN "Creating and Testing with a wrong form: signGrade 2, execGrade 151..." NOCOL << std::endl;
		Form test =  Form("test", 2, 151);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void goodForm1() {
	try
	{
		std::cout << GRN "Creating and Testing with a wrong form: signGrade 2, execGrade 13..." NOCOL << std::endl;
		Form test =  Form("test1", 2, 13);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void goodForm2() {
	try
	{
		std::cout << GRN "Creating and Testing with a wrong form: signGrade 1, execGrade 150..." NOCOL << std::endl;
		Form test =  Form("test2", 1, 150);
		std::cout << test;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int	main () {
	try {
		wrongForm1();
		std::cout << std::endl;
		wrongForm2();
		std::cout << std::endl;
		wrongForm3();
		std::cout << std::endl;
		wrongForm4();
		std::cout << std::endl;
		goodForm1();
		std::cout << std::endl;
		goodForm2();
		std::cout << std::endl;
		pepito();
		std::cout << std::endl;
		lucas();
		std::cout << std::endl;
		cristina();

	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
