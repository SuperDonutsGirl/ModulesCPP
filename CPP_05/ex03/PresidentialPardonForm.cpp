/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:35:00 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/20 13:35:01 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//Cannonical form
PresidentialPardonForm::PresidentialPardonForm() : 
	AForm("PresidentialPardonForm", 25, 5), _target("Mysterious"){
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
	AForm("PresidentialPardonForm", 25, 5), _target(target){
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &inst) :
	_target(inst._target){
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &inst){
	AForm::operator=(inst);
	_target = inst._target;
	return *this;
}


//Public method for execute
bool PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (this->isExecutable(executor)){
		std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
		return true;
	}
	return false;
}

