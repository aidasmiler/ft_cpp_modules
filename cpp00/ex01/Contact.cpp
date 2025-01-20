/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:52:08 by airodrig          #+#    #+#             */
/*   Updated: 2023/02/26 17:54:22 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	return;
}

Contact::~Contact() {
	return;
}

void Contact::setFirstName(std::string name) {
	this->firstName = name;
}

void Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void Contact::setNickname(std::string nickname) {
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phone) {
	this->phoneNumber = phone;
}

void Contact::setSecret(std::string secret) {
	this->secret = secret;
}

void Contact::createContact(std::string name, std::string lastName, std::string nickname, std::string phone, std::string secret) {
	this->firstName = name;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNumber = phone;
	this->secret = secret;
}

std::string Contact::getFirstName() {
	return this->firstName;
}

std::string Contact::getLastName() {
	return this->lastName;
}

std::string Contact::getNickname() {
	return this->nickname;
}

std::string Contact::getPhoneNumber() {
	return this->phoneNumber;
}

std::string Contact::getSecret() {
	return this->secret;
}
