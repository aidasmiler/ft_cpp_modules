/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:55 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/14 13:41:39 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

# define NOCOL	"\033[0m"
# define RED	"\033[1;31m"
# define ORG	"\033[0;33m"
# define YEL	"\033[1;33m"
# define GRN	"\033[1;32m"
# define BLU	"\033[0;34m"
# define CYN	"\033[0;36m"
# define PUR	"\033[0;35m"

class AAnimal {
	private:

	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &ref);
		virtual ~AAnimal();
		AAnimal &operator=(const AAnimal &ref);
		std::string getType() const;
		void setType(std::string);
		virtual void makeSound() const = 0;
};

#endif
