/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:46:27 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/29 15:20:56 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

# define NOCOL	"\033[0m"
# define RED	"\033[1;31m"
# define ORG	"\033[0;33m"
# define YEL	"\033[1;33m"
# define GRN	"\033[1;32m"
# define BLU	"\033[0;34m"
# define CYN	"\033[0;36m"
# define PUR	"\033[0;35m"

#define MAX_MATERIAS 4

class ICharacter;
class AMateria {
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &ref);

		AMateria &operator=(const AMateria &ref);

		virtual ~AMateria();

		std::string const &getType() const;
		void setType(std::string const &);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
