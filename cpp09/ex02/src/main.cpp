/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:23:05 by airodrig          #+#    #+#             */
/*   Updated: 2023/12/10 01:30:10 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

int main(int argc, char const **argv)
{
	try
	{
		PmergeMe<std::list<int> > lst(argv, argc);
		std::cout << "Before: ";
		lst.print();
		lst.sort();
		std::cout << "After: ";
		lst.print();
		std::cout << "Time to process a range of " << lst.getSize() <<
			" elements with std::lst: " << lst.getProcessTime() << " us" << std::endl;
		PmergeMe<std::vector<int> > vec(argv, argc);
		vec.sort();
		std::cout << "Time to process a range of " << vec.getSize() <<
			" elements with std::vec: " << vec.getProcessTime() << " us" << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
