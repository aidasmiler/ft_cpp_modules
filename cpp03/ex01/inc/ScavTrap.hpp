/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:57:58 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/11 19:04:44 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
private:
	ScavTrap();
protected:
	static const int _energy = 50;
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();
	ScavTrap &operator= (const ScavTrap &copy);

	void attack(std::string const &target);
	void guardGate();
};

#endif
