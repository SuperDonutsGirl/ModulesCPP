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
	this->brain = new Brain;
}
Dog::Dog(const Dog &inst) : Animal("Dog)"){
	this->setType(inst.getType());
	this->brain = new Brain;
	*this->brain = *(inst.brain);
    std::cout << "Copy-Constructor of " << this->type << std::endl;
}
Dog::~Dog(){
	delete this->brain;
	std::cout << this->type << " was destroyed" << std::endl;
}
Animal&		Dog::operator=(const Animal	&inst)
{
	const Dog	*newDog;

	newDog= dynamic_cast<const Dog *>(&inst);
	if (newDog)
	{
		this->type = newDog->type;
		*this->brain = *newDog->brain;
	}

	return (*this);
}

void    Dog::makeSound() const{
    std::cout << "*** Wouf Wouf ***" << std::endl;
}

Brain	*Dog::getBrain() const{
	return this->brain;
}
