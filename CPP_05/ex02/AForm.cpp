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

#include "AForm.hpp"

//Canonical Form
AForm::AForm(): 
	name("DefaultForm"), gToSign(150), gToExec(150){
		this->setState(false);
		std::cout << "DefaultForm:" << this->getName() << " has been created";
		std::cout << " with grade " << this->getGToSign() << " for sign";
		std::cout << " and grade " << this->getGToExec() << " for execute" << std::endl;	
}

AForm::AForm(const std::string name, const int gToSign, const int gToExec):
	name(name), gToSign(gToSign), gToExec(gToExec){
		this->setState(false);
		std::cout << "Form:" << this->getName() << " has been created";
		std::cout << " with grade " << this->getGToSign() << " for sign";
		std::cout << " and grade " << this->getGToExec() << " for execute" << std::endl;	
}

AForm::AForm(AForm const &inst):
	name(inst.getName()), gToSign(inst.getGToSign()), gToExec(inst.getGToSign()){
		this->setState(inst.state);
		std::cout << "Form:" << this->getName() << " has been copied";
}

AForm &AForm::operator=(AForm const &inst){
	this->setState(inst.state);
	std::cout << "Form:" << this->getName() << " has been copied with operator";
	return *this;
}

AForm::~AForm(){
	std::cout << "Form:" << this->getName() << " has been destroyed" << std::endl;
}

//Getter & Setter
std::string AForm::getName() const{
	return this->name;
}

int AForm::getGToSign() const{
	return this->gToSign;
}

int AForm::getGToExec() const{
	return this->gToExec;
}

bool AForm::getState() const{
	return this->state;
}

void AForm::setState(bool state){
	this->state = state;
}

//Overload
std::ostream&	operator<<(std::ostream &os, AForm &inst){
	std::string state;

	if (inst.getState()){
		os << "Form:" << inst.getName() << std::endl;
		std::cout << "\t~Signed:Yes \t~grade to execute:" << inst.getGToExec() << std::endl;
	}
	else{
		os << "Form:" << inst.getName() << std::endl;
		std::cout << "\t~Signed:No \t~grade to sign:" << inst.getGToSign();
		std::cout << "\t~grade to execute:" << inst.getGToExec() << std::endl;
	}
	return os;
}

//Check grade
const char	*AForm::GradeTooHighException::what() const throw(){
	return ("'s grade is to high");
}

const char	*AForm::GradeTooLowException::what() const throw(){
	return ("'s grade is to low");
}

//Check is signed
const char	*AForm::StateNotYetSigned::what() const throw(){
	return ("this form is not yet signed");
}

//Function Sign
void AForm::beSigned(Bureaucrat &employe){
	try{
		if (this->getGToSign() < employe.getGrade())
			throw(AForm::GradeTooLowException());
		else
			this->setState(true);
	}
	catch (AForm::GradeTooLowException lower){
		std::cout << this->getName() << ": "<< employe.getName() << lower.what() << std::endl;
	}
}

//check is exectutable
bool AForm::isExecutable(Bureaucrat const &executor) const{
	try{
		if (this->getState() == false)
			throw(AForm::StateNotYetSigned());
		else{
			try{
				if (executor.getGrade() > this->getGToExec())
					throw(AForm::GradeTooLowException());
				else
					return true;
			}
			catch (AForm::GradeTooLowException lower){
				std::cout << this->getName() << ": "<< executor.getName() << lower.what() << " for execute this form"<< std::endl;
				return false;
			}
		}
	}
	catch (AForm::StateNotYetSigned notSigned){
		std::cout << this->getName() << " can't be execute because " << notSigned.what() << std::endl;
		return false;
	}
}
