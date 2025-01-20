/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:03:47 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/25 17:56:20 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <Form.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>

class Intern
{
private:
public:
	Intern();
	Intern(const Intern &ref);
	Intern &operator=(const Intern &ref);
	~Intern();
	Form *makeForm(std::string name, std::string target);
};

#endif