/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:25:56 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/20 13:25:57 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//Cannonical form
ShrubberyCreationForm::ShrubberyCreationForm() : 
	AForm("ShrubberyCreationForm", 145, 137), _target("Shrubbery"){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	AForm("ShrubberyCreationForm", 145, 137), _target(target){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &inst) :
	_target(inst._target){
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &inst){
	AForm::operator=(inst);
	_target = inst._target;
	return *this;
}

const std::string trees =
"               ,@@@@@@@,\n"
"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
"       |o|        | |         | |\n"
"       |.|        | |         | |\n"
"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";

//Public method for execute
bool ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	std::string fileName = _target + "_shrubbery";
	if (this->isExecutable(executor)){
		std::ofstream file;
		file.open(fileName, std::ios::app);

		if (!file.is_open()){
			std::cout << "Failed to create or open file";
			return false;
		}
		else{
			file << trees << "   Plant by " << executor.getName() << std::endl;
			file.close();
			return true;
		}
	}
	return false;
}
