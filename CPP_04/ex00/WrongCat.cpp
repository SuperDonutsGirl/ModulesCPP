/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:07:34 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/31 11:07:36 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << this->type <<  " Default constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &inst) : WrongAnimal("WrongCat)"){
	this->setType(inst.getType());
	std::cout << "Copy-Constructor of " << this->type << std::endl;
}
WrongCat::~WrongCat(){
	std::cout << this->type << " was destroyed" << std::endl;
}
WrongCat	&WrongCat::operator=(const WrongCat &inst){
	this->setType(inst.getType());
	std::cout << "WrongCat Operator Constructor called" << std::endl;
	return *this;
}

void    WrongCat::makeSound() const{
    std::cout << "*** Wrong Miawo ***" << std::endl;
}
