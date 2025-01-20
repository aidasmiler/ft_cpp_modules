/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:35:56 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/30 18:43:54 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cstddef>
# include <stdexcept>

template <typename T> class Array {
	private:
		T* data;
		size_t size;
	public:
		Array();
		Array(size_t n);
		Array(const Array &ref);
		~Array();
		size_t getSize() const;
		Array &operator=(const Array &ref);
		T &operator[](const size_t index);

		class IndexOutOfLimitsException: public std::exception {
			public:
				virtual const char* what() const throw() {
					return "Index out of bounds";
				}
		};
};

template <typename T> Array<T>::Array(): data(NULL), size(0) {}

template <typename T> Array<T>::Array(size_t n) {
	this->data = new T[n];
	this->size = n;
	for (size_t i = 0; i < n; i++) {
		this->data[i] = T();
	}
}

template <typename T> Array<T>::Array(const Array &ref) {
	*this = ref;
}

template <typename T> Array<T> &Array<T>::operator=(const Array& ref) {
	if (this == &ref)
		return *this;
	if (!this->data)
		delete[] this->data;
	this->size = ref.size;
	this->data = new T[ref.size];
	for (size_t i = 0; i < ref.size; i++) {
		this->data[i] = ref.data[i];
	}
	return *this;
}

template <typename T> size_t Array<T>::getSize() const {
	return this->size;
}

template <typename T> Array<T>::~Array() {
	delete[] this->data;
}

template <typename T> T& Array<T>::operator[](const size_t index) {
	if (index >= this->size)
		throw IndexOutOfLimitsException();
	return this->data[index];
}

#endif
