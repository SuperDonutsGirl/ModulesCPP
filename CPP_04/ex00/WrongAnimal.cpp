/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:07:14 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/31 11:07:15 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//Orthodox canonical form
WrongAnimal::WrongAnimal() : type("default wrongAnimal"){
	std::cout << "Default WrongAnimal Constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type){
	this->setType(type);
	std::cout << "WrongAnimal Constructor with parametter called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &inst){
	this->setType(inst.getType());
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}
WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &inst){
	this->setType(inst.getType());
	std::cout << "WrongAnimal Operator Constructor called" << std::endl;
	return *this;
}
WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor called" << std::endl;
}


// Getter & Setter
void	WrongAnimal::setType(std::string type){
	this->type = type;
}
std::string	WrongAnimal::getType() const{
	return this->type;
}


//Make sound
void	WrongAnimal::makeSound() const{
	std::cout << "*** WrongAnimal sound ***" << std::endl;
}
