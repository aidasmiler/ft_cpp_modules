/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:59:13 by airodrig          #+#    #+#             */
/*   Updated: 2023/03/06 16:56:02 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	std::string option;
	PhoneBook	phonebook;

	std::cout << "Type one of the following options:" << std::endl;
	std::cout << ORG << "ADD (if you'd like to add a new contact to your phonebook)" << NOCOL << std::endl;
	std::cout << BLU << "SEARCH (it will show a specific contact's info)" << NOCOL << std::endl;
	std::cout << PUR << "EXIT (to close the program)" << NOCOL << std::endl;

	while (option.compare("EXIT")) {
		std::cout << "What do you want to do now? ";
		getline(std::cin, option);
		if (!option.compare("ADD"))
			phonebook.addContact();
		else if (!option.compare("SEARCH"))
			phonebook.searchContact();
		else if (!option.compare("EXIT"))
			std::cout << PUR << "Exiting..." << NOCOL << std::endl;
		else
			std::cout << YEL << "I don't understand. Please, try again" << NOCOL << std::endl;
	}

	return 0;
}
