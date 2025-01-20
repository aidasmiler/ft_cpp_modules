/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:56:17 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/21 18:09:40 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	option_pos(std::string argv_aux, std::string options[4]){
	int i = -1;
	while (++i < 4)
		if (!argv_aux.compare(options[i]))
			break;
	return i;
}

int main(int argc, char *argv[])
{
	Harl harl = Harl();
	if (argc != 2) {
		std::cout << BLU "Choose a level please" NOCOL << std::endl;
		return (0);
	}

	std::string argv_aux = argv[1];
	std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int pos = option_pos(argv_aux, options);
	switch (pos)
	{
	case 0:
		std::cout << "[ " << options[0] << " ]" << std::endl;
		harl.complain(options[0]);
	case 1:
		std::cout << "[ " << options[1] << " ]" << std::endl;
		harl.complain(options[1]);
	case 2:
		std::cout << "[ " << options[2] << " ]" << std::endl;
		harl.complain(options[2]);
	case 3:
		std::cout << "[ " << options[3] << " ]" << std::endl;
		harl.complain(options[3]);
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return 0;
}
