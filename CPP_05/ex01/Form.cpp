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
	_name("DefaultForm"), _gToSign(150), _gToExec(150){
		this->setState(false);
		std::cout << "DefaultForm:" << this->getName() << " has been created";
		std::cout << " with grade " << this->getGToSign() << " for sign";
		std::cout << " and grade " << this->getGToExec() << " for execute" << std::endl;	
}

Form::Form(const std::string name, const int gToSign, const int gToExec):
	_name(name), _gToSign(gToSign), _gToExec(gToExec){
		this->setState(false);
		std::cout << "Form:" << this->getName() << " has been created";
		std::cout << " with grade " << this->getGToSign() << " for sign";
		std::cout << " and grade " << this->getGToExec() << " for execute" << std::endl;	
}

Form::Form(Form const &inst):
	_name(inst.getName()), _gToSign(inst.getGToSign()), _gToExec(inst.getGToSign()){
		this->setState(inst._state);
		std::cout << "Form:" << this->getName() << " has been copied";
}

Form &Form::operator=(Form const &inst){
	this->setState(inst._state);
	std::cout << "Form:" << this->getName() << " has been copied with operator";
	return *this;
}

Form::~Form(){
	std::cout << "Form:" << this->getName() << " has been destroyed" << std::endl;
}

//Getter & Setter
std::string Form::getName() const{
	return this->_name;
}

int Form::getGToSign() const{
	return this->_gToSign;
}

int Form::getGToExec() const{
	return this->_gToExec;
}

bool Form::getState(){
	return this->_state;
}

void Form::setState(bool state){
	this->_state = state;
}

//Overload
std::ostream&	operator<<(std::ostream &os, Form &inst){
	const std::string state = inst.getState() ? "Yes" : "No"; 
	os << "Form:" << inst.getName() << std::endl;
		std::cout << "\t~Signed:" << state << " \t~grade to sign:" << inst.getGToSign();
		std::cout << "\t~grade to execute:" << inst.getGToExec() << std::endl;
	return os;
}

//Check grade
const char	*Form::GradeTooHighException::what() const throw(){
	return (" grade is too high for sign ");
}

const char	*Form::GradeTooLowException::what() const throw(){
	return (" grade is too low for sign ");
}

//Function Sign
void Form::beSigned(Bureaucrat &employe){
	try{
		if (this->getGToSign() < employe.getGrade())
			throw(Form::GradeTooLowException());
		else
			setState(true);
			std::cout << employe.getName() << " signs " << this->getName() << std::endl;
	}
	catch (Form::GradeTooLowException lower){
		std::cout << employe.getName() << "'s" << lower.what() << this->getName() << std::endl;
	}
}