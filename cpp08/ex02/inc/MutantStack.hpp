/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:29:08 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/26 21:44:49 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSACK_HPP

#include <stack>
#include <iterator>

template <class T>

class MutantStack: public std::stack<T> {
private:
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator begin() {
		return std::stack<T>::c.begin();
	}

	iterator end() {
		return std::stack<T>::c.end();
	}

	reverse_iterator rbegin() {
		return std::stack<T>::c.rbegin();
	}

	reverse_iterator rend() {
		return std::stack<T>::c.rend();
	}

	MutantStack(): std::stack<T>() {

	}

	~MutantStack() {

	}
};


#endif
