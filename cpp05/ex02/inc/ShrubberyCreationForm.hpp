/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:46:29 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/25 17:30:32 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <Form.hpp>

class ShrubberyCreationForm : public Form {
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &ref);
		~ShrubberyCreationForm();
		class FileManipulationError: public std::exception {
			virtual const char* what() const throw();
		};
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref);
		std::string getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif
