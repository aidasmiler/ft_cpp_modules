/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:47:45 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 17:26:47 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap : public ClapTrap {
private:
	FragTrap();
protected:
	static const int _hits = 100;
	static const int _attack = 30;
public:
	FragTrap(std::string name);
	FragTrap (const FragTrap &copy);
	~FragTrap();
	FragTrap &operator= (const FragTrap &copy);

	void highFivesGuys();
};

#endif
