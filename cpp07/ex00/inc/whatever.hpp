/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:34:26 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/30 16:59:45 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
template <typename T> void swap(T &a, T &b) {
	T aux = a;
	a = b;
	b = aux;
}

template <typename T> T min(const T &a, const T &b) {
	return ((a < b) ? a : b);
}

template <typename T> T max(const T &a, const T &b) {
	return ((a > b) ? a : b);
}

#endif
