/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:33:06 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/08 20:33:04 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <cstddef>
#include <iostream>

template <typename T, typename Func> void iter(T *addr, size_t len, Func &fun) {
	for (size_t i = 0; i < len; i++) {
		fun(addr[i]);
	}
}

#endif
