/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 10:15:01 by airodrig          #+#    #+#             */
/*   Updated: 2023/03/08 18:06:34 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

# define NOCOL	"\033[0m"
# define RED	"\033[1;31m"
# define ORG	"\033[0;33m"
# define YEL	"\033[1;33m"
# define GRN	"\033[1;32m"
# define BLU	"\033[0;34m"
# define CYN	"\033[0;36m"
# define PUR	"\033[0;35m"

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << YEL << "str mem address: " << std::hex << &str  << NOCOL << std::endl;
	std::cout << GRN << "stringPTR mem address: " << std::hex << stringPTR << NOCOL << std::endl;
	std::cout << CYN << "stringREF mem address: " << std::hex << &stringREF << NOCOL << std::endl;

	std::cout << YEL << "str value: " << str << NOCOL << std::endl;
	std::cout << GRN << "stringPTR value: " << *stringPTR << NOCOL << std::endl;
	std::cout << CYN << "stringREF value: " << stringREF << NOCOL << std::endl;
	return 0;
}
