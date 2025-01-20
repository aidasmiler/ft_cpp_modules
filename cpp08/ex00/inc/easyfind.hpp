/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:55:51 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/16 14:07:47 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <exception>

template <typename T> typename T::iterator easyfind(T &cont, int f) {
	typename T::iterator it;
	for(it = cont.begin(); it != cont.end(); it++) {
		if (*it == f)
			return it;
	}
	throw std::runtime_error("Error: value not found in the container");
}

#endif
