/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:57:24 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/30 13:57:26 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
}

HumanB::~HumanB(){
}

void	HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}

void	HumanB::attack(){
	std::cout << this->name << " attack with his " << this->weapon->getType() << std::endl;
}
