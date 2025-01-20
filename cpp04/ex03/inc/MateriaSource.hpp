/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:58:25 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/29 13:09:26 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *_inventory[MAX_MATERIAS];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &ref);
	MateriaSource &operator=(const MateriaSource &ref);
	~MateriaSource();
	void learnMateria(AMateria *);
	AMateria* createMateria(std::string const & type);
	void deleteEverything();
};

#endif
