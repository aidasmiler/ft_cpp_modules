/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:14:49 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 13:56:22 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
	ScavTrap peter = ScavTrap("Peter");
	ScavTrap wanda = ScavTrap("Wanda");
	ScavTrap peter2 = ScavTrap(peter);
	ScavTrap cosmo = ScavTrap("Cosmo");
	ScavTrap petersanch = ScavTrap("perrosanxe");

	peter.attack("Wanda");
	wanda.takeDamage(peter.getAttackDamage());
	cosmo.attack("Peter");
	peter2.takeDamage(cosmo.getAttackDamage());
	wanda.guardGate();
	wanda.attack("Peter");
	peter.takeDamage(wanda.getAttackDamage());
	wanda.beRepaired(15);
	petersanch.attack("Peter");
	peter.takeDamage(petersanch.getAttackDamage());
	cosmo.attack("Peter");
	peter.takeDamage(cosmo.getAttackDamage());
	peter.guardGate();
	peter.attack("Wanda");
	wanda.takeDamage(peter.getAttackDamage());
	peter.attack("Wanda");
	wanda.takeDamage(peter.getAttackDamage());
	peter.attack("Wanda");
	wanda.takeDamage(peter.getAttackDamage());
	peter.attack("Wanda");
	wanda.takeDamage(peter.getAttackDamage());
	peter.attack("Wanda");
	wanda.takeDamage(peter.getAttackDamage());
	peter.attack("Wanda");
	wanda.takeDamage(peter.getAttackDamage());
	peter.beRepaired(34);
	peter.attack("Cosmo");
}
