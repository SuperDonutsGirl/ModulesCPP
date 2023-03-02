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