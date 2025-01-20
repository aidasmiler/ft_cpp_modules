/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:17 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/17 13:48:58 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	AAnimal* farm[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
			farm[i] = new Dog();
		else
			farm[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << farm[i]->getType() << " " << std::endl;
		farm[i]->makeSound();
	}
	for (int i = 0; i < 10; i++)
		delete farm[i];
	return 0;
}
