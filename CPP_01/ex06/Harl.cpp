/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:19:57 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/30 16:19:59 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug() {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \nI really do !" << std::endl << std::endl;
}

void Harl::info() {
    std::cout << "I cannot believe adding extra bacon costs more money \nYou didn’t put enough bacon in my burger ! \nIf you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void Harl::warning() {
    std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error() {
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;
}

int getLvl(std::string level, std::string *lvlName){
    for (size_t i = 0; i < lvlName->length() - 1 ; i++){
        if (level == lvlName[i])
            return i;
    }
    return -1;
}

void Harl::complain(std::string level){
    std::string lvlName[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Harl::*fct[4])(void) = {
        &Harl::debug, &Harl::info, &Harl::warning, &Harl::error
    };

    switch (getLvl(level, lvlName)){
        case 0:
            std::cout << "[ " << lvlName[0] << " ]" << std::endl;
            (this->*(fct[0]))();
        case 1:
            std::cout << "[ " << lvlName[1] << " ]" << std::endl;
            (this->*(fct[1]))();
        case 2:
            std::cout << "[ " << lvlName[2] << " ]" << std::endl;
            (this->*(fct[2]))();
        case 3:
            std::cout << "[ " << lvlName[3] << " ]" << std::endl;
            (this->*(fct[3]))();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]";
    }
}
