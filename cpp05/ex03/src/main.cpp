/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:09:51 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/01 13:45:37 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

int	main () {
	try {
		Intern someRandomIntern;
		Form * rrf;
		Bureaucrat cristina = Bureaucrat("Cristina", 1);
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;
		cristina.signForm(*rrf);
		rrf->execute(cristina);
		std::cout << *rrf << std::endl;
		free (rrf);
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << *rrf << std::endl;
		cristina.signForm(*rrf);
		rrf->execute(cristina);
		std::cout << *rrf << std::endl;
		free (rrf);
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << *rrf << std::endl;
		cristina.signForm(*rrf);
		rrf->execute(cristina);
		std::cout << *rrf << std::endl;
		free (rrf);
		rrf = someRandomIntern.makeForm("sddasdljkasd", "Bender");
		std::cout << *rrf << std::endl;
		cristina.signForm(*rrf);
		rrf->execute(cristina);
		std::cout << *rrf << std::endl;
		free (rrf);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
