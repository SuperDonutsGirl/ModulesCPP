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
Bureaucrat::Bureaucrat() : _name("Default"){
	this->_grade = 150;
	std::cout << "Default bureaucrat was create with grade of 150" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	try	{
		this->_grade = grade;
		if (this->_grade < 1){
			this->_grade = 1;
			throw (Bureaucrat::GradeTooHighException());
		}
		else if (this->_grade > 150){
			this->_grade = 150;
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

Bureaucrat::Bureaucrat(Bureaucrat const &inst) : _name(inst.getName())	{
	*this = inst;
	std::cout << inst.getName() << " has been copied" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &inst)	{
	this->_grade = inst.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(){
	std::cout << this->_name << " has been destroyed" << std::endl;
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
	return this->_name;
}
int Bureaucrat::getGrade() const{
	return this->_grade;
}

//Increment and decrement grade
void	Bureaucrat::incrementGrade(){
	try	{
		this->_grade--;
		if (this->_grade < 1){
			this->_grade = 1;
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
		this->_grade++;
		if (this->_grade > 150){
			this->_grade = 150;
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
