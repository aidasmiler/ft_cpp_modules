/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:55 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/11 15:19:21 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(const Cat &ref);
		~Cat();
		Cat &operator=(const Cat &ref);
		void makeSound() const;
};

#endif
