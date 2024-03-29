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

Dog::Dog(){
	this->type = "Dog";
	std::cout << this->type <<  " Default constructor called" << std::endl;
	this->brain = new Brain;
}

Dog::Dog(const Dog &inst){
	this->setType(inst.getType());
	this->brain = new Brain;
	*this->brain = *inst.brain;
    std::cout << "Copy-Constructor of " << this->type << std::endl;
}

Dog::~Dog(){
	delete this->brain;
	std::cout << this->type << " was destroyed" << std::endl;
}

Dog&		Dog::operator=(const Dog &inst)
{
	this->type = inst.type;
	*this->brain = *inst.brain;

	return (*this);
}

void    Dog::makeSound() const{
    std::cout << "*** Wouf Wouf ***" << std::endl;
}

Brain	*Dog::getBrain() const{
	return this->brain;
}
