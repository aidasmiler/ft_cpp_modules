/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:35:22 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/02 14:59:23 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

#define MAX_ADDRESSES 128

class Character: public ICharacter {
	private:
		AMateria* _inventory[MAX_MATERIAS];
		std::string _name;
		AMateria* _inventoryAddresses[MAX_ADDRESSES];
		void deleteEverything();
	public:
		Character();
		Character(std::string name);
		Character(const Character &ref);
		Character &operator=(const Character &ref);
		~Character();

		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif
