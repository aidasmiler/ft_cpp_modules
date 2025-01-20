/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:18:50 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/02 20:30:02 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <A.hpp>
#include <B.hpp>
#include <C.hpp>

Base *generate(void) {
	srand(std::clock());
	int num = std::rand() % 3;
	if (num == 0)
		return new A();
	if (num == 1)
		return new B();
	return new C();
}

void identify(Base *p){
	if (dynamic_cast<B *>(p) == NULL && dynamic_cast<C *>(p) == NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<A *>(p) == NULL && dynamic_cast<C *>(p) == NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<A *>(p) == NULL && dynamic_cast<B *>(p) == NULL)
		std::cout << "C" << std::endl;
}

void identify(Base &p){
	try {
		dynamic_cast<A &>(p);
	}
	catch(const std::exception& e) {
		try {
			dynamic_cast<B &>(p);
		}
		catch(const std::exception& e) {
			std::cout << "C" << std::endl;
			return;
		}
		try {
			dynamic_cast<C &>(p);
		}
		catch(const std::exception& e) {
			std::cout << "B" << std::endl;
			return;
		}
	}
	try {
		dynamic_cast<B &>(p);
	}
	catch(const std::exception& e) {
		try {
			dynamic_cast<A &>(p);
		}
		catch(const std::exception& e) {
			std::cout << "C" << std::endl;
			return;
		}
		try {
			dynamic_cast<C &>(p);
		}
		catch(const std::exception& e) {
			std::cout << "A" << std::endl;
			return;
		}
	}
	try {
		dynamic_cast<C &>(p);
	}
	catch(const std::exception& e) {
		try {
			dynamic_cast<A &>(p);
		}
		catch(const std::exception& e) {
			std::cout << "B" << std::endl;
			return;
		}
		try {
			dynamic_cast<B &>(p);
		}
		catch(const std::exception& e) {
			std::cout << "A" << std::endl;
			return;
		}
	}
}

int main() {
	Base *p1 = generate();
	Base &r1 = *p1;
	Base *p2 = generate();
	Base &r2 = *p2;
	Base *p3 = generate();
	Base &r3 = *p3;
	Base *p4 = generate();
	Base &r4 = *p4;
	std::cout << "Identifying p1: ";
	identify(p1);
	std::cout << "Identifying p2: ";
	identify(p2);
	std::cout << "Identifying p3: ";
	identify(p3);
	std::cout << "Identifying p4: ";
	identify(p4);
	std::cout << std::endl;
	std::cout << "Identifying r1: ";
	identify(r1);
	std::cout << "Identifying r2: ";
	identify(r2);
	std::cout << "Identifying r3: ";
	identify(r3);
	std::cout << "Identifying r4: ";
	identify(r4);
	delete p1;
	delete p2;
	delete p3;
	delete p4;
}
