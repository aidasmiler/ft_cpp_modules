/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:09:51 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/03 23:49:38 by airodrig         ###   ########.fr       */
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
		incrementBureaucrat(pepito);
		decrementBureaucrat(pepito);
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
		incrementBureaucrat(lucas);
		decrementBureaucrat(lucas);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void ramiro() {
	try {
		std::cout << GRN "Creating and Testing with Ramiro (grade 0)..." NOCOL << std::endl;
		Bureaucrat ramiro = Bureaucrat("Ramiro", 0);
		std::cout << "This is " << ramiro;
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void adelaida() {
	try {
		std::cout << GRN "Creating and Testing with Adelaida (grade 151)..." NOCOL << std::endl;
		Bureaucrat adelaida = Bureaucrat("Adelaida", 151);
		std::cout << "This is " << adelaida;
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
		for (int i = 13; i > 0; i--) {
			incrementBureaucrat(cristina);
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

void mario() {
	try {
		std::cout << GRN "Creating and Testing with Mario (grade 147)..." NOCOL << std::endl;
		Bureaucrat mario = Bureaucrat("Mario", 147);
		std::cout << "This is " << mario;
		for (int i = 0; i < 3; i++) {
			decrementBureaucrat(mario);
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}

int	main () {
	try {
		pepito();
		std::cout << std::endl;
		lucas();
		std::cout << std::endl;
		ramiro();
		std::cout << std::endl;
		adelaida();
		std::cout << std::endl;
		cristina();
		std::cout << std::endl;
		mario();
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
