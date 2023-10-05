/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:33:46 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/30 14:34:00 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	std::cout << this->type <<  " Default constructor called" << std::endl;
}
Cat::Cat(const Cat &inst) : Animal(inst){
	this->setType(inst.getType());
	std::cout << "Copy-Constructor of " << this->type << std::endl;
}
Cat::~Cat(){
	std::cout << this->type << " was destroyed" << std::endl;
}
Cat	&Cat::operator=(const Cat &inst){
	this->setType(inst.getType());
	std::cout << "Cat Operator Constructor called" << std::endl;
	return *this;
}

void    Cat::makeSound() const{
    std::cout << "*** Miawo Miawo ***" << std::endl;
}

