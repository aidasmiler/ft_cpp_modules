/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:47:45 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 17:27:23 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap {
private:
protected:
	static const int _hits = 100;
	static const int _attack = 30;
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap (const FragTrap &copy);
	~FragTrap();
	FragTrap &operator= (const FragTrap &copy);

	void highFivesGuys();
};

#endif
