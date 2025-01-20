/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:30:40 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/30 18:45:24 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Array.hpp>
#include <iostream>

int main() {
{	Array<int> arr1;
	std::cout << "arr1 size: " << arr1.getSize() << std::endl;

	Array<int> arr2(5);
	std::cout << "arr2 size: " << arr2.getSize() << std::endl;
	for (size_t i = 0; i < arr2.getSize(); ++i) {
		arr2[i] = i * 2;
	}

	Array<int> arr3 = arr2;
	std::cout << "arr3 size: " << arr3.getSize() << std::endl;

	arr1 = arr2;
	std::cout << "arr1 size: " << arr1.getSize() << std::endl;

	try {
		for (size_t i = 0; i < arr2.getSize() + 1; i++) {
			std::cout << "arr[" << i << "] value: " << arr2[i] << std::endl;
		}

	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
{
	Array<std::string> arr1;
	std::cout << "arr1 size: " << arr1.getSize() << std::endl;

	Array<std::string> arr2(3);
	std::cout << "arr2 size: " << arr2.getSize() << std::endl;
	for (size_t i = 0; i < arr2.getSize(); ++i) {
		arr2[i] = "hola ";
	}

	Array<std::string> arr3 = arr2;
	std::cout << "arr3 size: " << arr3.getSize() << std::endl;

	arr1 = arr2;
	std::cout << "arr1 size: " << arr1.getSize() << std::endl;

	try {
		for (size_t i = 0; i < arr2.getSize() + 1; i++) {
			std::cout << "arr[" << i << "] value: " << arr2[i] << std::endl;
		}

	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
	// while(1);
	return 0;
}
