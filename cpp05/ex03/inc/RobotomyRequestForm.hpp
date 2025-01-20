/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:50:24 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/25 17:28:58 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <Form.hpp>

class RobotomyRequestForm: public Form {
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &ref);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);
		std::string getTarget() const;
		void execute(Bureaucrat const &executor) const;
};

#endif
