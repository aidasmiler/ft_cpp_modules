/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:19:30 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/01 15:11:44 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

int main(int argc, char const *argv[])
{
	if (argc != 2)
		return 0;
	std::string str = argv[1];
	ScalarConverter::convert(str);
	return 0;
}

