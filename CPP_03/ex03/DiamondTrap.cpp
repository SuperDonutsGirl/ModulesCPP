/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:40:54 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/24 10:40:55 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

//Orthodox canonical form
DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap(){
	callDiamondTrapAnnouce();
	std::cout << "Default constructor called " << std::endl;
		std::cout << YELLOW << "\t" << this->getName() << " ~" << WHITE;
	std::cout << " Is an instance of Claptrap that is half Fragtrap, half ScavTrap.\n" << std::endl;
	this->name = "Default";
	this->hitPoints = FragTrap::hitPoints;
	this->energiePoints = ScavTrap::energiePoints;
	this->attackDammage = FragTrap::attackDammage;
}

DiamondTrap::DiamondTrap(const std::string &name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	this->name = name;
	callDiamondTrapAnnouce();
	std::cout << "Default constructor with parameter called " << std::endl;
	std::cout << YELLOW << "\t" << this->name << " ~" << WHITE;
	std::cout << " Is an instance of Claptrap that is half Fragtrap, half ScavTrap.\n" << std::endl;
	this->hitPoints = FragTrap::hitPoints;
	this->energiePoints = ScavTrap::energiePoints;
	this->attackDammage = FragTrap::attackDammage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &inst)
	: ClapTrap(inst.name + "_clap_name"), ScavTrap(inst.name), FragTrap(inst.name){
	this->name = inst.name;
	callDiamondTrapAnnouce();
	std::cout << "Copy constructor called -> " << this->name << " is clone of ";
	std::cout << inst.name << " (instance of Claptrap that is half Fragtrap, half ScavTrap) "  << "\n" << std::endl;
	this->hitPoints = inst.hitPoints;
	this->energiePoints = inst.energiePoints;
	this->attackDammage = inst.attackDammage;
}

void	DiamondTrap::operator=(const DiamondTrap &inst){
	callDiamondTrapAnnouce();
	std::cout << "Assignation operator called -> " << inst.name << " is cloned, ";
	std::cout << "now " << this->name << " is " << inst.name << "\n" << std::endl;
	this->name = inst.name;
	this->hitPoints = inst.hitPoints;
	this->energiePoints = inst.energiePoints;
	this->attackDammage = inst.attackDammage;
}

DiamondTrap::~DiamondTrap(){
	callDiamondTrapAnnouce();
	std::cout << "Destructor called -> " << this->name << " is dead" << std::endl;
}




//Function
void	DiamondTrap::whoAmI(){
	callDiamondTrapAnnouce();
	std::cout << "My Diamond name is " << this->name;
	std::cout << " end my Clap name is " << ClapTrap::name << std::endl;
}





//Annexe function
void	callDiamondTrapAnnouce(){
	std::cout << YELLOW << DIAMONDTRAP << WHITE;
}
