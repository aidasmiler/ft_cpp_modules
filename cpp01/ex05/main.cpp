/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:56:17 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/19 14:55:44 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	int i = 0;
	Harl harl = Harl();
	std::string argv_aux;

	while (++i < argc) {
		argv_aux = argv[i];
		harl.complain(argv_aux);
	}

	return 0;
}
