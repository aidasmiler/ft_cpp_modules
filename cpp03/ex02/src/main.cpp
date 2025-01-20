/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:14:49 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/08 13:05:03 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
	FragTrap peter = FragTrap("Peter");
	FragTrap wanda = FragTrap("Wanda");
	FragTrap peter2 = FragTrap(peter);
	FragTrap cosmo = FragTrap("Cosmo");
	FragTrap petersanch = FragTrap("perrosanxe");

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
	wanda.highFivesGuys();
	cosmo.highFivesGuys();
}
