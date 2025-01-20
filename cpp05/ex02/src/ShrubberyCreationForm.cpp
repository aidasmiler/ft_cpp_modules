/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airodrig <airodrig@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:48:31 by airodrig          #+#    #+#             */
/*   Updated: 2023/10/01 13:59:17 by airodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation", 145, 137), _target("none") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref): Form(ref) {
	*this = ref;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

const char* ShrubberyCreationForm::FileManipulationError::what() const throw() {
	return (RED "Error encountered while creating the file." NOCOL);
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref) {
	if (this == &ref)
		return *this;
	this->_target = ref._target;
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	this->execChecker(executor);
	std::ofstream shrubberyForm(this->getTarget() + "_shrubbery");
	if (!shrubberyForm.good())
		throw ShrubberyCreationForm::FileManipulationError();
	shrubberyForm << "                                              .\n\
                                .         ;\n\
    .              .              ;%     ;;\n\
        ,           ,                :;%  %;\n\
        :         ;                   :;%;'     .,\n\
,.        %;     %;            ;        %;'    ,;\n\
;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
%;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
    ;%;      %;        ;%;        % ;%;  ,%;'\n\
    `%;.     ;%;     %;'         `;%%;.%;'\n\
    `:;%.    ;%%. %@;        %; ;@%;%'\n\
        `:%;.  :;bd%;          %;@%;'\n\
        `@%:.  :;%.         ;@@%;'\n\
            `@%.  `;@%.      ;@@%;\n\
            `@%%. `@%%    ;@@%;\n\
                ;@%. :@%%  %@@%;\n\
                %@bd%%%bd%%:;\n\
                    #@%%%%%:;;\n\
                    %@@%%%::;\n\
                    %@@@%(o);  . '\n\
                    %@@@o%;:(.,'\n\
                `.. %@@@o%::;\n\
                    `)@@@o%::;\n\
                    %@@(o)::;\n\
                    .%@@@@%::;\n\
                    ;%@@@@%::;.\n\
                ;%@@@@%%:;;;.\n\
            ...;%@@@@@%%:;;;;,.." << std::endl;
	shrubberyForm << "         . . .\n\
       .        .  .     ..    .\n\
    .                 .         .  .\n\
                    .\n\
                   .                ..\n\
   .          .            .              .\n\
   .            '.,        .               .\n\
   .              'b      *\n\
    .              '$    #.                ..\n\
   .    .           $:   #:               .\n\
 ..      .  ..      *#  @):        .   . .\n\
              .     :@,@):   ,.**:'   .\n\
  .      .,         :@@*: ..**'      .   .\n\
           '#o.    .:(@'.@*''  .\n\
   .  .       'bq,..:,@@*'   ,*      .  .\n\
              ,p$q8,:@)'  .p*'      .\n\
       .     '  . '@@Pp@@*'    .  .\n\
        .  . ..    Y7'.'     .  .\n\
                  :@):.\n\
                 .:@:'.\n\
               .::(@:.      " << std::endl;
	shrubberyForm.close();
}
