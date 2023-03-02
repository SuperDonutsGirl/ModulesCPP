/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:43:34 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/22 16:43:35 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    this->_formList[0] = "presidential pardon";
    this->_formList[1] = "robotomy request";
    this->_formList[2] = "shrubbery creation";

	this->form[0] = &Intern::newPresident;
	this->form[1] = &Intern::newRobotomy;
	this->form[2] = &Intern::newShrubbery;
}

Intern::Intern(Intern const &inst){
	*this = inst;
}

Intern	&Intern::operator=(Intern const &inst){
	(void)inst;
	return *this;
}

Intern::~Intern(){
	std::cout << "Intern has been destroyed" << std::endl;
}

//Create Forms
AForm	*Intern::newPresident(std::string target){
	return new PresidentialPardonForm(target);
}
AForm	*Intern::newRobotomy(std::string target){
	return new RobotomyRequestForm(target);
}
AForm	*Intern::newShrubbery(std::string target){
	return new ShrubberyCreationForm(target);
}
AForm	*Intern::makeForm(std::string name, std::string target){
	for (int i = 0; i < 3; i++){
		if (name == _formList[i]){
			std::cout << "Intern creates " << name << " form" << std::endl;
			return (this->*form[i])(target);
		}
	}
	std::cout << "Form:" << name << " does't exist. Intern can't create it." << std::endl;
	return NULL;
}

