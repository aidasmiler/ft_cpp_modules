/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:11:24 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/16 23:26:10 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>
#include <ctime>
#include <iostream>

int main()
{
	// Failures
	try {
		Span sp = Span(0);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	Span sp = Span(50000);
	srand(std::clock());
	try {
		std::cout << "Shortest wrong Span: " << sp.shortestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	sp.addNumber(1);
	try {
		std::cout << "Longest wrong Span: " << sp.longestSpan() << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	// Correct tests
	sp.addNumber(87);
	sp.addNumber(9);
	sp.addNumber(4);
	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

	sp.addNumber(19996, 50, std::clock());
	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	sp.addNumber(29990, 80, std::clock());
	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	try {
		for (int i = 0; i < 15; i++) {
			int rand = std::rand() % 30 + 1;
			std::cout << "Adding " << i << ": " << rand * i << std::endl;
			sp.addNumber(i * rand);
		}
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}

