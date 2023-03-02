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
	return ("'s grade is to high than the maximum !\n\t grade is set to max grade");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return ("'s grade is to low than the minimum !\n\t grade is set to min grade");
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

//Overload
std::ostream &operator<<(std::ostream &os, Bureaucrat &inst){
	os << inst.getName() << ", bureaucrat grade " << inst.getGrade() << std::endl;
	return os;
}
