/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 23:52:08 by airodrig          #+#    #+#             */
/*   Updated: 2023/09/25 17:29:58 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <Bureaucrat.hpp>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

# define NOCOL	"\033[0m"
# define RED	"\033[1;31m"
# define ORG	"\033[0;33m"
# define YEL	"\033[1;33m"
# define GRN	"\033[1;32m"
# define BLU	"\033[0;34m"
# define CYN	"\033[0;36m"
# define PUR	"\033[0;35m"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
	public:
		Form();
		Form(std::string name, int signGrade, int execGrade);
		Form (const Form &ref);
		virtual ~Form() = 0;

		Form &operator=(const Form &ref);

		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class FormNotSignedException: public std::exception {
			virtual const char* what() const throw();
		};

		std::string getName() const;
		bool isSigned() const;
		int getSignGrade() const;
		int getExecGrade() const;

		void beSigned(Bureaucrat &b);
		void checkExecGrade(Bureaucrat const &b) const;
		void checkIsSigned() const;
		void execChecker(Bureaucrat const &b) const;
		virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &print, const Form &toPrint);

#endif
