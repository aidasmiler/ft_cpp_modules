/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:32:52 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/08 20:33:09 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

template <typename T>
void printElement(T value) {
	std::cout << value << " ";
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	char charArray[] = {'H', 'e', 'l', 'l', 'o'};
	std::string stringArray[] = {"hi", "how", "are", "you", "? :)"};

	size_t intLength = sizeof(intArray) / sizeof(intArray[0]);
	std::cout << "Iterating over intArray: ";
	iter(intArray, intLength, printElement<int>);
	std::cout << std::endl;

	size_t charLength = sizeof(charArray) / sizeof(charArray[0]);
	std::cout << "Iterating over charArray: ";
	iter(charArray, charLength, printElement<char>);
	std::cout << std::endl;

	size_t stringLength = sizeof(stringArray) / sizeof(stringArray[0]);
	std::cout << "Iterating over stringArray: ";
	iter(stringArray, stringLength, printElement<std::string>);
	std::cout << std::endl;

	return 0;
}
