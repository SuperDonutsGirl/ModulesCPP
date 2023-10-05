/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:34:35 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/30 14:34:37 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	std::cout << this->type <<  " Default constructor called" << std::endl;
}
Dog::Dog(const Dog &inst) : Animal(inst){
	this->setType(inst.getType());
    std::cout << "Copy-Constructor of " << this->type << std::endl;
}
Dog::~Dog(){
	std::cout << this->type << " was destroyed" << std::endl;
}
Dog	&Dog::operator=(const Dog &inst){
	this->setType(inst.getType());
	std::cout << "Dog Operator Constructor called" << std::endl;
	return *this;
}

void    Dog::makeSound() const{
    std::cout << "*** Wouf Wouf ***" << std::endl;
}
