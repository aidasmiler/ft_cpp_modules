/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:45:01 by airodrig          #+#    #+#             */
/*   Updated: 2023/12/11 17:47:33 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <list>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

#define BOXSIZE 2
template <typename Container>
class PmergeMe
{
	typedef typename Container::iterator iterator;
	private:
		Container cont;
		double process_time;

		bool checkArg(const char *argv)
		{
			for (size_t i = 0; argv[i]; i++)
				if (!isdigit(argv[i]))
					return false;
			return true;
		}

		int checkNum(const char *argv)
		{
			int n = std::atoi(argv);
			if (n < 0)
				throw PmergeMe::ErrorException();
			return n;
		}

		void sort(iterator first, iterator last)
		{
			size_t dist = std::distance(first, last);
			if (dist > BOXSIZE)
			{
				iterator mid = first;
				std::advance(mid, dist/2);
				sort(first, mid);
				sort(mid, last);
				merge(first, mid, last);
			}
			else
				insertSort(first, last);
		}

		void insertSort(iterator first, iterator last)
		{
			iterator it1, it2, aux;
			int key;
			for (it1 = first; it1 != last; ++it1)
			{
				it2 = it1;
				key = *it1;
				aux = it2;
				while (it2 != first && *(--aux) > key)
				{
					std::iter_swap(it2, aux);
					it2--;
				}
				*it2 = key;
			}
		}

		void merge(iterator first, iterator mid, iterator last)
		{
			Container left(first, mid);
			Container right(mid, last);

			iterator lit = left.begin();
			iterator rit = right.begin();
			iterator cur = first;

			while (lit != left.end() && rit != right.end())
			{
				if (*lit < *rit) {
					*cur = *lit;
					lit++;
				} else {
					*cur = *rit;
					rit++;
				}
				cur++;
			}
			for (; lit != left.end(); lit++, cur++)
				*cur = *lit;
			for (; rit != right.end(); rit++, cur++)
				*cur = *rit;
		}

	public:
		PmergeMe(const char **argv, const int argc): cont(Container())
		{
			clock_t start = clock();
			for (int i = 1; i < argc; i++)
			{
				if (!checkArg(argv[i]))
					throw ErrorException();
				int num = checkNum(argv[i]);
				cont.push_back(num);
			}
			clock_t end = clock();
			process_time += static_cast<double>(end - start) / CLOCKS_PER_SEC;
		}
		PmergeMe(const PmergeMe &ref)
		{
			*this = ref;
		}
		PmergeMe &operator=(const PmergeMe &ref)
		{
			if (this == &ref)
				return *this;
			this->cont = ref.cont;
			this->start = ref.start;
			this->end = ref.end;
			return *this;
		}

		~PmergeMe(){}

		void print()
		{
			for (iterator it = cont.begin(); it != cont.end(); it++)
				std::cout << *it << " ";
			std::cout << std::endl;
		}

		size_t getSize() const
		{
			return this->cont.size();
		}

		double getProcessTime() const
		{
			return process_time;
		}

		void sort()
		{
			clock_t start = clock();
			sort(cont.begin(), cont.end());
			clock_t end = clock();
			process_time += static_cast<double>(end - start) / CLOCKS_PER_SEC;
		}

		class ErrorException: public std::exception {
			virtual const char* what() const throw()
			{
				return("Error");
			}
		};
};

#endif
