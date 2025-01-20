/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:55 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/09 19:33:12 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal {
	private:
	public:
		Dog();
		Dog(const Dog &ref);
		~Dog();
		Dog &operator=(const Dog &ref);
		void makeSound() const;
};

#endif
