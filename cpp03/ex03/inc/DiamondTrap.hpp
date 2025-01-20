/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:29:22 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 17:42:38 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _name;
	DiamondTrap();

public:
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &copy);
	~DiamondTrap();
	DiamondTrap &operator= (const DiamondTrap &copy);

	void attack(std::string const &target);
	void whoAmI();
};

#endif
