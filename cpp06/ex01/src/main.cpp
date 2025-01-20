/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:45:43 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/29 19:57:25 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>

int main()
{
	uintptr_t test;
	Data myData = {28, 'r', 10.4f};
	test = Serializer::serialize(&myData);
	Data *testData = Serializer::deserialize(test);

	std::cout << "Data.i: " << myData.i << ", Data.c: " << myData.c << ", Data.j: " << myData.t << std::endl;
	std::cout << "test serialize: " << test << std::endl;
	std::cout << "test deserialize: " << testData << std::endl;
	std::cout << "testData.i: " << testData->i << ", testData.c: " << testData->c << ", testData.j: " << testData->t << std::endl;

	return 0;
}

