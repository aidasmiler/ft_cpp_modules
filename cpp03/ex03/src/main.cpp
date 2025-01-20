/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:14:49 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/09 14:36:09 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
	DiamondTrap peter = DiamondTrap("Peter");
	DiamondTrap wanda = DiamondTrap("Wanda");
	DiamondTrap peter2 = DiamondTrap(peter);
	DiamondTrap cosmo = DiamondTrap("Cosmo");
	DiamondTrap petersanch = DiamondTrap("perrosanxe");

	peter.attack("Wanda");
	wanda.takeDamage(peter.getAttackDamage());
	cosmo.attack("Peter");
	peter2.takeDamage(cosmo.getAttackDamage());
	wanda.attack("Peter");
	peter.takeDamage(wanda.getAttackDamage());
	wanda.attack("Peter");
	peter.takeDamage(wanda.getAttackDamage());
	wanda.attack("Peter");
	peter.takeDamage(wanda.getAttackDamage());
	wanda.beRepaired(15);
	petersanch.attack("Peter");
	peter.takeDamage(petersanch.getAttackDamage());
	petersanch.attack("Peter");
	peter.takeDamage(petersanch.getAttackDamage());
	cosmo.attack("Peter");
	peter.takeDamage(cosmo.getAttackDamage());
	wanda.whoAmI();
	cosmo.whoAmI();
}
