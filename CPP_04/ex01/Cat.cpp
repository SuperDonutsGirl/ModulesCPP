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
	this->brain = new Brain;
}
Cat::Cat(const Cat &inst) : Animal("Cat)"){
	this->setType(inst.getType());
	this->brain = new Brain;
	*this->brain = *(inst.brain);
	std::cout << "Copy-Constructor of " << this->type << std::endl;
}
Cat::~Cat(){
	delete this->brain;
	std::cout << this->type << " was destroyed" << std::endl;
}
Animal&		Cat::operator=(const Animal	&inst)
{
	const Cat	*newCat;

	newCat= dynamic_cast<const Cat *>(&inst);
	if (newCat)
	{
		this->type = newCat->type;
		*this->brain = *newCat->brain;
	}

	return (*this);
}

void    Cat::makeSound() const{
    std::cout << "*** Miawo Miawo ***" << std::endl;
}


Brain	*Cat::getBrain() const{
	return this->brain;
}