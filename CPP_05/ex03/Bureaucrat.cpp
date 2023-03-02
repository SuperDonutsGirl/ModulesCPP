/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:08:17 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/13 16:08:18 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//Canonical form
Bureaucrat::Bureaucrat() : name("Default"){
	this->grade = 150;
	std::cout << "Default bureaucrat was create with grade of 150" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name){
	try	{
		this->grade = grade;
		if (this->grade < gMax){
			this->grade = gMax;
			throw (Bureaucrat::GradeTooHighException());
		}
		else if (this->grade > gMin){
			this->grade = gMin;
			throw (Bureaucrat::GradeTooLowException());
		}
	}
	catch (Bureaucrat::GradeTooHighException highter){
		std::cout << this->getName() << highter.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException lower)	{
		std::cout << this->getName() << lower.what() << std::endl;
	}
	std::cout << this->getName() << " was create with grade of " << this->getGrade() << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &inst) : name(inst.getName())	{
	*this = inst;
	std::cout << inst.getName() << " has been copied" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &inst)	{
	this->grade = inst.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(){
	std::cout << this->name << " has been destroyed" << std::endl;
}

//Check grade
const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("is grade is to high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return ("is grade is to low");
}

//Getter :
std::string	Bureaucrat::getName() const {
	return this->name;
}
int Bureaucrat::getGrade() const{
	return this->grade;
}

//Increment and decrement grade
void	Bureaucrat::incrementGrade(){
	try	{
		this->grade--;
		if (this->grade < gMax){
			this->grade = gMax;
			throw (Bureaucrat::GradeTooHighException());
		}
		std::cout << this->getName() << "'s grade has been incremented" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException highter){
		std::cout << this->getName() << highter.what() << std::endl;
	}
}

void 	Bureaucrat::decrementGrade(){
	try	{
		this->grade++;
		if (this->grade > gMin){
			this->grade = gMin;
			throw (Bureaucrat::GradeTooLowException());
		}
		std::cout << this->getName() << "'s grade has been decremented" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException lower){
		std::cout << this->getName() << lower.what() << std::endl;
	}
}

//Sign form
void Bureaucrat::signForm(AForm &form){
	try{
		if (this->getGrade() > form.getGToSign())
			throw(Bureaucrat::GradeTooLowException());
		else if (form.getState())
			std::cout << this->getName() << " can not sign " << form.getName() << " because is already signed" << std::endl;
		else{
			form.setState(true);
			std::cout << this->getName() << " signs " << form.getName() << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooLowException lower){
		std::cout << this->getName() << " can not sign " << form.getName() << " because " << lower.what() << std::endl;
	}
}

//Execute form
void		Bureaucrat::executeForm(AForm const &form) const{
	if (!form.execute(*this)){
		std::cout << name << " can't executed " << form.getName() << std::endl;
		return ;
	}
	std::cout << name << " executed " << form.getName() << std::endl;
}


//Overload
std::ostream &operator<<(std::ostream &os, Bureaucrat &inst){
	os << inst.getName() << ", bureaucrat grade " << inst.getGrade() << std::endl;
	return os;
}
