/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:14:35 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/11 15:59:03 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

# define NOCOL	"\033[0m"
# define RED	"\033[1;31m"
# define ORG	"\033[0;33m"
# define YEL	"\033[1;33m"
# define GRN	"\033[1;32m"
# define BLU	"\033[0;34m"
# define CYN	"\033[0;36m"
# define PUR	"\033[0;35m"

class Brain
{
private:
public:
	std::string ideas[100];
	Brain();
	Brain(const Brain &ref);
	~Brain();
	Brain &operator=(const Brain &ref);
};

#endif
