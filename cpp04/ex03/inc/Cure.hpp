/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:11:12 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/14 14:27:34 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	private:
	public:
		Cure();
		Cure(const Cure &ref);
		Cure &operator=(const Cure &ref);

		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};


#endif
