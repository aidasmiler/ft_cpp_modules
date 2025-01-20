/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:16:55 by airodrig          #+#    #+#             */
/*   Updated: 2023/08/10 18:24:29 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

# define NOCOL	"\033[0m"
# define RED	"\033[1;31m"
# define ORG	"\033[0;33m"
# define YEL	"\033[1;33m"
# define GRN	"\033[1;32m"
# define BLU	"\033[0;34m"
# define CYN	"\033[0;36m"
# define PUR	"\033[0;35m"

class WrongAnimal {
	private:

	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &ref);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &ref);
		std::string getType() const;
		void setType(std::string);
		void makeSound() const;
};

#endif
