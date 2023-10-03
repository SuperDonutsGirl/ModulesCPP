/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:32:59 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/19 12:33:01 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Orthodox canonical form
ScavTrap::ScavTrap(){
	callScavTrapAnnouce();
	std::cout << "Default constructor called " << std::endl;
	std::cout << GREEN << "\t" << this->getName() << " ~" << WHITE;
	std::cout << " is a ScavTrap instance of ClapTrap class\n" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
	callScavTrapAnnouce();
	std::cout << "Default constructor called with parameter called" << std::endl;
	std::cout << GREEN << "\t" << this->getName() << " ~" << WHITE;
	std::cout << " is a ScavTrap instance of " << this->getName() << " (ClapTrap instance)\n" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &inst) : ClapTrap(inst){
	callScavTrapAnnouce();
	std::cout << "Copy constructor called -> " << inst.getName() << " is clone of ";
	std::cout << this->getName() << " (ClapTrap instance) "  << "\n" << std::endl;
	this->setInstanceAttributs(inst);
}
ScavTrap	&ScavTrap::operator=(const ScavTrap &inst){
	callScavTrapAnnouce();
	std::cout << "Assignation operator called -> " << inst.getName() << " is cloned, ";
	std::cout << "now " << this->getName() << " is " << inst.getName() << "\n" << std::endl;
	this->setInstanceAttributs(inst);

	return *this;
}
ScavTrap::~ScavTrap(){
	callScavTrapAnnouce();
	std::cout << "Destructor called -> " << this->getName() << " is dead" << std::endl;
}

//Functions
void	ScavTrap::attack(std::string const &target){
	callScavTrapAnnouce();
	if (this->getEnergie() <= 5 || this->getHit() == 0){
		std::cout << this->getName() << " does not have enough energy to attack with ScavTrap attack" << std::endl;
	}
	else{
		this->setEnergie(this->getEnergie() - 5);
		std::cout << this->getName() << " attack " << target << " with ScavTrap attack, causing " << this->getDammage() << " points of damage!" << std::endl;
	}
	this->getProfil();
}
void	ScavTrap::guardGate(){
	callScavTrapAnnouce();
	std::cout << GREEN << this->getName() << " ~ ";
	std::cout << WHITE << "have enterred in Gate keeper mode.\n" << std::endl;
}

//Annexe function
void	callScavTrapAnnouce(){
	std::cout << GREEN << SCAVTRAP << WHITE;
}