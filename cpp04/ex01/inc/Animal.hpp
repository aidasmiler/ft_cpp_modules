/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:55 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/09 19:59:07 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define NOCOL	"\033[0m"
# define RED	"\033[1;31m"
# define ORG	"\033[0;33m"
# define YEL	"\033[1;33m"
# define GRN	"\033[1;32m"
# define BLU	"\033[0;34m"
# define CYN	"\033[0;36m"
# define PUR	"\033[0;35m"

class Animal {
	private:

	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &ref);
		virtual ~Animal();
		Animal &operator=(const Animal &ref);
		std::string getType() const;
		void setType(std::string);
		virtual void makeSound() const;
};

#endif
