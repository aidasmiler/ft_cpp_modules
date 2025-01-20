/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:00:37 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/19 15:09:11 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::debug(void) {
	std::cout << GRN "I love having extra bacon for my 7XL-double-cheese-triple-" <<
	"pickle-special-ketchup burger. I really do!" NOCOL << std::endl;
}

void	Harl::info(void) {
	std::cout << BLU "I cannot believe adding extra bacon costs more money." <<
	"You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!"\
	NOCOL << std::endl;
}

void	Harl::warning(void) {
	std::cout << ORG "I think I deserve to have some extra bacon for free." <<
	"I’ve been comingfor years whereas you started working here since last month."\
	 NOCOL << std::endl;
}

void	Harl::error(void) {
	std::cout << RED "This is unacceptable! I want to speak to the manager now."\
	NOCOL << std::endl;
}

void	Harl::complain(std::string level) {
	std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*jump_table[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = -1;
	while (++i < 4 && level.compare(options[i]));
	if (i == 4)
		std::cout << RED "Option not valid" << std::endl;
	else
		(this->*jump_table[i])();
}