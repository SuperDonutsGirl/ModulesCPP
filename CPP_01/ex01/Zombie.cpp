/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:03:08 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/29 16:03:10 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
    this->setName("Random");
    std::cout << this->_name << " has been created" << std::endl;
}

Zombie::Zombie(std::string name){
    this->setName(name);
    std::cout << this->_name << " has been created" << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->_name << " has been destroyed" << std::endl;
}

void    Zombie::setName(std::string name){
    this->_name = name;
}

void    Zombie::annouce(){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
