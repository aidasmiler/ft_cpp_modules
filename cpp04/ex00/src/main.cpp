/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:17 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 18:25:35 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	const WrongAnimal* metaw = new WrongAnimal();
	const Animal* jw = new Dog();
	const WrongAnimal* iw = new WrongCat();
	std::cout << jw->getType() << " " << std::endl;
	std::cout << iw->getType() << " " << std::endl;
	std::cout << metaw->getType() << " " << std::endl;
	iw->makeSound(); //will output the wronganimal sound!
	jw->makeSound();
	metaw->makeSound();
	delete metaw;
	delete iw;
	delete jw;
	return 0;
}
