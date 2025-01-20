/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:11:34 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/16 23:17:09 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include<algorithm>

class Span
{
private:
	unsigned int _N;
	std::vector<int> _vec;
public:
	Span();
	Span(const unsigned int _N);
	Span(const Span &ref);
	Span &operator=(const Span &ref);
	~Span();
	void addNumber(int n);
	void addNumber(const unsigned int range, const unsigned int norm, time_t seed);
	int shortestSpan();
	int longestSpan();
};

#endif
