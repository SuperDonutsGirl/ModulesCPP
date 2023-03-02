/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:33:07 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/30 14:33:10 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//Orthodox canonical form
Animal::Animal(){
	std::cout << "Default Animal Constructor called" << std::endl;
}
Animal::Animal(std::string type){
	this->setType(type);
	std::cout << "Animal Constructor with parametter called" << std::endl;
}
Animal::Animal(const Animal &inst){
	this->setType(inst.getType());
	std::cout << "Animal Copy Constructor called" << std::endl;
}
Animal	&Animal::operator=(const Animal &inst){
	this->type = inst.getType();
	std::cout << "Animal Operator Constructor called" << std::endl;
	return *this;
}
Animal::~Animal(){
	std::cout << "Animal Destructor called" << std::endl;
}






// Getter & Setter
void	Animal::setType(const std::string &type){
	this->type = type;
}
const std::string&	Animal::getType() const{
	return this->type;
}


//Make sound
void	Animal::makeSound() const{
	std::cout << "*** Animal sound ***" << std::endl;
}