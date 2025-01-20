/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:19:44 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/22 14:37:19 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <cstring>
#include <stack>

class RPN
{
	private:
		std::stack<int> _numbers;

		RPN();
		RPN &operator=(const RPN &ref);
		RPN(const RPN &ref);
		void operate(int);
		void sum(int, int);
		void substraction(int, int);
		void product(int, int);
		void division(int, int);
	public:
		RPN(std::string);
		~RPN();
		class ErrorException: public std::exception {
			virtual const char* what() const throw();
		};
};



#endif
