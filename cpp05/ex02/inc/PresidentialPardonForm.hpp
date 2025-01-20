/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:51:20 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/25 17:30:20 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <Form.hpp>

class PresidentialPardonForm : public Form {
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &ref);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &ref);
		std::string getTarget() const;
		void execute(Bureaucrat const &executor) const;
};


#endif
