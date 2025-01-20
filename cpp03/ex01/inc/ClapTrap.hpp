/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:14:45 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 16:45:06 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <stdlib.h>

# define NOCOL	"\033[0m"
# define RED	"\033[1;31m"
# define ORG	"\033[0;33m"
# define YEL	"\033[1;33m"
# define GRN	"\033[1;32m"
# define BLU	"\033[0;34m"
# define CYN	"\033[0;36m"
# define PUR	"\033[0;35m"

class ClapTrap
{
protected:
	std::string	_name;
	int			_hitpoints;
	int			_energyPoints;
	int			_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap &operator= (const ClapTrap &copy);

	std::string getName() const;
	int getHitpoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
	void setName(std::string);
	void setHitpoints(int);
	void setEnergyPoints(int);
	void setAttackDamage(int);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
