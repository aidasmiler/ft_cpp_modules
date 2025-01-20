/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:11:19 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/14 14:27:28 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	private:

	public:
		Ice();
		Ice(const Ice &ref);
		Ice &operator=(const Ice &ref);
		~Ice();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
