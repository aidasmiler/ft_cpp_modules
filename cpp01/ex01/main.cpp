/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:29:21 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/25 15:45:26 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


bool isNumber(std::string str) {
	int i = -1;
	while (str[++i])
		if (str[i] < '0' || str[i] > '9')
				return false;
	return true;
}


int main()
{
	std::string nInput = "a";
	std::string name;
	int N;
	while (!isNumber(nInput)) {
		std::cout << PUR << "How many zombies do you think you can handle? " << NOCOL;
		getline(std::cin, nInput);
	}
	N = atoi(nInput.c_str());
	std::cout << PUR << "You can choose their name too... " << NOCOL;
	getline(std::cin, name);
	Zombie *horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++) {
		std::cout << "[" << i << "] ";
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}
