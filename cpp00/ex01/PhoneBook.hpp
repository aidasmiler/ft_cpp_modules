/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:19:58 by airodrig          #+#    #+#             */
/*   Updated: 2023/02/26 19:56:37 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONECLASS_HPP
# define PHONECLASS_HPP

# include <iostream>
# include "Contact.hpp"
# include <stdlib.h>

# define NOCOL	"\033[0m"
# define RED	"\033[1;31m"
# define ORG	"\033[0;33m"
# define YEL	"\033[1;33m"
# define GRN	"\033[1;32m"
# define BLU	"\033[0;34m"
# define CYN	"\033[0;36m"
# define PUR	"\033[0;35m"
class PhoneBook {
	private:
		Contact contacts[8];
		int lastContact;
		void showContacts();
		void showContact(int index);
		void formatInfo(std::string info);
		bool isNumber(std::string str);
	public:
		PhoneBook(); //constructor
		~PhoneBook(); //destructor
		void addContact();
		void searchContact();
};

#endif
