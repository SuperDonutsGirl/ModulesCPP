/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:09:58 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/29 13:10:00 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
}

Zombie::Zombie(std::string name){
    this->_name = name;
    std::cout << this->_name << " has been created" << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->_name << " has been destroyed" << std::endl;
}



void    Zombie::annouce(){
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
