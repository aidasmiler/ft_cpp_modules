/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:19:55 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/19 18:43:58 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook():lastContact(0) {
	return;
}

PhoneBook::~PhoneBook(){
	return;
}

void PhoneBook::addContact() {
	std::string name;
	std::string lastName;
	std::string nickname;
	std::string phone;
	std::string secret;

	std::cout << ORG << "Adding a new contact..." << std::endl;
	std::cout << ORG << "What's their name? " << NOCOL;
	getline(std::cin, name);
	std::cout << ORG << "What's their surname? " << NOCOL;
	getline(std::cin, lastName);
	std::cout << ORG << "Nickname: " << NOCOL;
	getline(std::cin, nickname);
	std::cout << ORG << "Phone: " << NOCOL;
	getline(std::cin, phone);
	std::cout << ORG << "Tell me their darkest secret " << NOCOL;
	getline(std::cin, secret);
	if (name.empty() || lastName.empty() || nickname.empty() || phone.empty() || secret.empty()) {
		std::cout << RED "No empty fields please" NOCOL << std::endl;
		return;
	}
	lastContact = lastContact < 8 ? lastContact : 0;
	this->contacts[lastContact++].createContact(name, lastName, nickname, phone, secret);
	std::cout << GRN << "Contact added succesfully!" << NOCOL << std::endl;
}

void PhoneBook::formatInfo(std::string info) {
	if (info.length() > 10)
		std::cout << info.substr(0, 9) << ".";
	else {
		for (int i = 0; i <10 - (int)info.length(); i++)
			std::cout << " ";
		std::cout << info;
	}
	std::cout << BLU << "|" << NOCOL;
}


void PhoneBook::showContacts() {
	std::cout << BLU << "|   Index  |First Name|Last  Name| nickname |" << NOCOL << std::endl;
	for (int i = 0; i < 8; i++) {
		if(!this->contacts[i].getFirstName().compare(""))
			continue;
		std::cout <<BLU << "|         " << NOCOL;
		std::cout << i << BLU << "|" << NOCOL;
		formatInfo(this->contacts[i].getFirstName());
		formatInfo(this->contacts[i].getLastName());
		formatInfo(this->contacts[i].getNickname());
		std::cout << std::endl;
	}
}

void PhoneBook::showContact(int index) {
	std::cout << BLU << "Here you go!" << std::endl;
	std::cout << "Name: " << NOCOL << this->contacts[index].getFirstName() << std::endl;
	std::cout << BLU << "Last name: " << NOCOL << this->contacts[index].getLastName() << std::endl;
	std::cout << BLU << "Nickname: " << NOCOL << this->contacts[index].getNickname() << std::endl;
	std::cout << BLU << "Phone number: " << NOCOL << this->contacts[index].getPhoneNumber() << std::endl;
	std::cout << BLU << "Darkest Secret: " << NOCOL << this->contacts[index].getSecret() << std::endl;
}

bool PhoneBook::isNumber(std::string str) {
	int i = -1;
	while (str[++i])
		if (str[i] < '0' || str[i] > '9')
			return false;
	return true;
}

void PhoneBook::searchContact() {
	std::string input;
	int index = 8;

	this->showContacts();

	while (index < 0 || index > 7 || this->contacts[index].getFirstName().empty()) {
		std::cout << BLU << "Which contact do you want to see? (Tell me a number from 0 to 7) " << NOCOL;
		getline(std::cin, input);
		if (this->isNumber(input))
			index = atoi(input.c_str());
		if (index < 0 || index > 7 || !this->isNumber(input))
			std::cout << RED << "Index not valid, try again" << NOCOL << std::endl;
		else if (this->contacts[index].getFirstName().empty())
			std::cout << RED << "The contact you are requesting does not exist" << NOCOL << std::endl;
	}
	this->showContact(index);
}
