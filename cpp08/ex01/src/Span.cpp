/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:11:41 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/16 23:19:13 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span(){
}

Span::Span(const unsigned int N): _N(N) {
	if (N == 0)
		throw std::invalid_argument("The maximum number of integers must be greater than 0");
	_vec.reserve(N);
}

Span::Span(const Span &ref) {
	*this = ref;
}

Span::~Span() {
}

Span &Span::operator=(const Span &ref){
	if (this == &ref)
		return *this;
	this->_N = ref._N;
	this->_vec.reserve(this->_N);
	if (!ref._vec.empty()) {
		this->_vec.insert(this->_vec.begin(), ref._vec.begin(), ref._vec.end());
		this->_vec.push_back(ref._vec.back());
	}
	return *this;
}

void Span::addNumber(int n) {
	if (this->_vec.size() == this->_N)
		throw std::out_of_range("The vector is full, no more numbers allowed in");
	this->_vec.push_back(n);
}

void Span::addNumber(const unsigned int range, const unsigned int norm, time_t seed) {
	srand(seed);
	int rand;
	for (size_t i = 0; i < range; i++) {
		rand = std::rand() % norm + 1;
		try {
			this->addNumber(i * rand);
		} catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
}

int Span::shortestSpan() {
	if (this->_vec.size() == 1 || this->_vec.empty())
		throw std::length_error("The vector does not have enough items to get span");
	std::sort(this->_vec.begin(), this->_vec.end());
	int span = this->_vec.back() - this->_vec.front();
	for (std::vector<int>::iterator it = this->_vec.begin() + 1; it < this->_vec.end(); it++) {
		if (*it - *(it - 1) < span)
			span = *it - *(it - 1);
	}
	return span;
}

int Span::longestSpan() {
	if (this->_vec.size() == 1 || this->_vec.empty())
		throw std::length_error("The vector does not have enough items to get span");
	std::sort(this->_vec.begin(), this->_vec.end());
	return this->_vec.back() - this->_vec.front();
}


