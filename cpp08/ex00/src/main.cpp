/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:55:41 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/16 14:10:00 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

int main()
{
	try
	{
		std::list<int> lst;
		std::vector<int> vec;
		for (int i = 0; i < 5; i++)
		{
			lst.push_back(i);
			vec.push_back(i);
		}

		std::cout << "Searching for number 3 in list " << *easyfind(lst, 3) << std::endl;
		std::cout << "Searching for number 0 in vector " << *easyfind(vec, 0) << std::endl;
		std::cout << "Searching for number 7 in list " << *easyfind(lst, 7) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
