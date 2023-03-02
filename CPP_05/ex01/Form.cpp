/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:52:27 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/15 11:52:29 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//Canonical Form
Form::Form(): 
	name("DefaultForm"), gToSign(150), gToExec(150){
		this->setState(false);
		std::cout << "DefaultForm:" << this->getName() << " has been created";
		std::cout << " with grade " << this->getGToSign() << " for sign";
		std::cout << " and grade " << this->getGToExec() << " for execute" << std::endl;	
}

Form::Form(const std::string name, const int gToSign, const int gToExec):
	name(name), gToSign(gToSign), gToExec(gToExec){
		this->setState(false);
		std::cout << "Form:" << this->getName() << " has been created";
		std::cout << " with grade " << this->getGToSign() << " for sign";
		std::cout << " and grade " << this->getGToExec() << " for execute" << std::endl;	
}

Form::Form(Form const &inst):
	name(inst.getName()), gToSign(inst.getGToSign()), gToExec(inst.getGToSign()){
		this->setState(inst.state);
		std::cout << "Form:" << this->getName() << " has been copied";
}

Form &Form::operator=(Form const &inst){
	this->setState(inst.state);
	std::cout << "Form:" << this->getName() << " has been copied with operator";
	return *this;
}

Form::~Form(){
	std::cout << "Form:" << this->getName() << " has been destroyed" << std::endl;
}

//Getter & Setter
std::string Form::getName() const{
	return this->name;
}

int Form::getGToSign() const{
	return this->gToSign;
}

int Form::getGToExec() const{
	return this->gToExec;
}

bool Form::getState(){
	return this->state;
}

void Form::setState(bool state){
	this->state = state;
}

//Overload
std::ostream&	operator<<(std::ostream &os, Form &inst){
	std::string state;

	if (inst.getState()){
		os << "Form:" << inst.getName() << std::endl;
		std::cout << "\t~Signed:Yes \t~grade to execute:" << inst.getGToExec() << std::endl;
	}
	else
		{os << "Form:" << inst.getName() << std::endl;
		std::cout << "\t~Signed:No \t~grade to sign:" << inst.getGToSign();
		std::cout << "\t~grade to execute:" << inst.getGToExec() << std::endl;}
	return os;
}

//Check grade
const char	*Form::GradeTooHighException::what() const throw(){
	return ("'s grade is to high for sign ");
}

const char	*Form::GradeTooLowException::what() const throw(){
	return ("'s grade is to low for sign");
}

//Function Sign
void Form::beSigned(Bureaucrat &employe){
	try{
		if (this->getGToSign() < employe.getGrade())
			throw(Form::GradeTooLowException());
		else
			this->setState(true);
	}
	catch (Form::GradeTooLowException lower){
		std::cout << this->getName() << ": "<< employe.getName() << lower.what() << std::endl;
	}
}