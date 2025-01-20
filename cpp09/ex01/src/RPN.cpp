/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:34:53 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/22 14:44:45 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>

RPN::RPN(){}

RPN::RPN(std::string input)
{
	std::string operators = "+-*/";
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!isdigit(input[i]) && input[i] != ' ' && !strchr("+-*/", input[i]))
			throw ErrorException();
		if (isdigit(input[i]))
			_numbers.push(input[i] - '0');
		else if (strchr(operators.c_str(), input[i]))
			operate(operators.find(input[i]));
	}
	if (_numbers.size() != 1)
		throw ErrorException();
	std::cout << _numbers.top() << std::endl;
}

RPN::RPN(const RPN &ref)
{
	*this = ref;
}

RPN::~RPN(){}

RPN &RPN::operator=(const RPN &ref)
{
	if (this == &ref)
		return *this;
	this->_numbers = ref._numbers;
	return *this;
}

void RPN::operate(int op)
{
	if (_numbers.size() < 2)
		throw ErrorException();
	int n1, n2;
	void (RPN::*operations[])(int, int) = {&RPN::sum, &RPN::substraction, &RPN::product, &RPN::division};
	n1 = _numbers.top();
	_numbers.pop();
	n2 = _numbers.top();
	_numbers.pop();
	(this->*operations[op])(n1, n2);
}

void RPN::sum(int n1, int n2)
{
	_numbers.push(n1 + n2);
}

void RPN::substraction(int n1, int n2)
{
	_numbers.push(n2 - n1);
}

void RPN::product(int n1, int n2)
{
	_numbers.push(n1 * n2);
}

void RPN::division(int n1, int n2)
{
	_numbers.push(n2 / n1);
}

const char *RPN::ErrorException::what() const throw()
{
	return("Error");
}
