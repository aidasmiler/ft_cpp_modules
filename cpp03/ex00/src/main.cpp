/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:14:49 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 13:42:36 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap peter = ClapTrap("Peter");
	ClapTrap wanda = ClapTrap("Wanda");
	ClapTrap peter2 = ClapTrap(peter);
	ClapTrap cosmo = ClapTrap("Cosmo");
	ClapTrap petersanch = ClapTrap("perrosanxe");

	peter.attack("Wanda");
	wanda.takeDamage(peter.getAttackDamage());
	cosmo.attack("Peter");
	peter2.takeDamage(cosmo.getAttackDamage());
	wanda.attack("Peter");
	peter.takeDamage(wanda.getAttackDamage());
	wanda.beRepaired(3);
	petersanch.attack("Peter");
	peter.takeDamage(petersanch.getAttackDamage());
	cosmo.attack("Peter");
	peter.takeDamage(cosmo.getAttackDamage());
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
	peter.attack("Wanda");
	wanda.takeDamage(peter.getAttackDamage());
	peter.attack("Wanda");
	wanda.takeDamage(peter.getAttackDamage());
	peter.beRepaired(2);
	peter.attack("Cosmo");
}
