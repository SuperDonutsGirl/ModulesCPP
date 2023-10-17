/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:21:02 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/20 15:21:03 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//Cannonical form
RobotomyRequestForm::RobotomyRequestForm() : 
	AForm("RobotomyRequestForm", 72, 45), _target("RandomRobotomy"){
        // srand(time(0));
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
	AForm("RobotomyRequestForm", 72, 45), _target(target){
        // srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &inst) :
	_target(inst._target){
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &inst){
	AForm::operator=(inst);
	_target = inst._target;
	return *this;
}


//Public method for execute
bool RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (this->isExecutable(executor)){
		std::cout << "GRIIIINGGIINGRZZRR" << std::endl;
        if (std::rand() % 2)
            std::cout << _target << " has been robotomized" << std::endl;
        else
            std::cout << "failed to robotomized " << _target << std::endl;
        return true;
    }
	return false;
}

