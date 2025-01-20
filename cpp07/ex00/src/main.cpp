/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 20:34:37 by airodrig          #+#    #+#             */
/*   Updated: 2023/11/30 17:00:23 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <whatever.hpp>

int main() {
	int ai = 1;
	int bi = 3;
	char ac = 'a';
	char bc = 'b';
	std::string as = "Hola";
	std::string bs = "Adios";
	std::cout << "PRESWAP int" << std::endl;
	std::cout << "ai = " << ai << ", bi = " << bi << std::endl;
	std::cout << "La mayor es: " << ::max(ai, bi) << std::endl;
	std::cout << "La menor es: " << ::min(ai, bi) << std::endl;
	::swap(ai, bi);
	std::cout << "POSSWAP int" << std::endl;
	std::cout << "ai = " << ai << ", bi = " << bi << std::endl;
	std::cout << "La mayor es: " << ::max(ai, bi) << std::endl;
	std::cout << "La menor es: " << ::min(ai, bi) << std::endl;
	std::cout << std::endl;
	std::cout << "PRESWAP char" << std::endl;
	std::cout << "ac = " << ac << ", bc = " << bc << std::endl;
	std::cout << "La mayor es: " << ::max(ac, bc) << std::endl;
	std::cout << "La menor es: " << ::min(ac, bc) << std::endl;
	::swap(ac, bc);
	std::cout << "POSSWAP char" << std::endl;
	std::cout << "ac = " << ac << ", bc = " << bc << std::endl;
	std::cout << "La mayor es: " << ::max(ac, bc) << std::endl;
	std::cout << "La menor es: " << ::min(ac, bc) << std::endl;
	std::cout << std::endl;
	std::cout << "PRESWAP string" << std::endl;
	std::cout << "as = " << as << ", bs = " << bs << std::endl;
	std::cout << "La mayor es: " << ::max(as, bs) << std::endl;
	std::cout << "La menor es: " << ::min(as, bs) << std::endl;
	::swap(as, bs);
	std::cout << "POSSWAP string" << std::endl;
	std::cout << "as = " << as << ", bs = " << bs << std::endl;
	std::cout << "La mayor es: " << ::max(as, bs) << std::endl;
	std::cout << "La menor es: " << ::min(as, bs) << std::endl;

}
