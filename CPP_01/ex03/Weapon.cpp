/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:56:38 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/30 13:56:39 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon(std::string type){
    this->type = type;
}

Weapon::~Weapon(){
}

const std::string &Weapon::getType() const{
    return (this->type);
}

void    Weapon::setType(std::string type){
    this->type = type;
}
