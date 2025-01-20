/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:21:01 by airodrig          #+#    #+#             */
/*   Updated: 2023/07/27 20:03:26 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.hpp"

int main(int argc, char const *argv[])
{
	std::ifstream infile;

	if (argc != 4) {
		std::cout << RED "ERROR" << std::endl << GRN \
		"Usage :./thirst [input file] [s1 to be replaced] [s2 to replace with]"\
		<< NOCOL << std::endl;
		return(0);
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	infile.open(argv[1], std::ifstream::in);
	if (!infile.good()) {
		std::cout << RED "ERROR" << std::endl << \
		"This file doesn't exist or you don't have permission." << std::endl;
		return(0);
	}

	std::string filename = (std::string)argv[1] + ".replace";
	std::ofstream outfile(filename.c_str());
	if (!outfile.good()) {
		std::cout << "ERROR" << std::endl << "Unable to create file." << std::endl;
		infile.close();
		return(0);
	}

	std::string line;
	while (getline(infile, line)) {
		size_t index = 0;
		while ((index = line.find(s1, index)) != std::string::npos) {
			if (!s1.compare("\0"))
				break;
			line.erase(index, s1.length());
			line.insert(index, s2);
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}
