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
	AForm("ShrubberyCreationForm", 145, 137), target("Shrubbery"){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	AForm("ShrubberyCreationForm", 145, 137), target(target){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &inst) :
	target(inst.target){
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &inst){
	AForm::operator=(inst);
	target = inst.target;
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
	if (this->isExecutable(executor)){
		std::ofstream file(target + "_shrubbery");
		if (file.bad()){
			std::cout << "Failed to create or open file";
			return false;
		}
		else{
			file << trees;
			return true;
		}
	}
	return false;
}
