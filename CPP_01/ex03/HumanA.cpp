/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:57:13 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/30 13:57:16 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon){
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA(){
}

void	HumanA::attack(){
	std::cout << this->name << " attack with his " << this->weapon->getType() << std::endl;
}
