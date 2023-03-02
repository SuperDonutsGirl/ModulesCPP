/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:13:43 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/17 23:13:45 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Orthodox canonical form
ClapTrap::ClapTrap(){
	this->name = "Default";
	this->hitPoints = 10;
	this->energiePoint = 10;
	this->attackDammage = 0;
	callClapTrapAnnouce();
	std::cout << "Default constructor called -> " << this->getName() << " is born" << std::endl;
	this->getProfil();
}
ClapTrap::ClapTrap(std::string name){
	this->name = name;
	this->hitPoints = 10;
	this->energiePoint = 10;
	this->attackDammage = 0;
	callClapTrapAnnouce();
	std::cout << "Default constructor with parameter called -> " << this->getName() << " is born" << std::endl;
	this->getProfil();
}
ClapTrap::ClapTrap(const ClapTrap &inst){
	callClapTrapAnnouce();
	std::cout << "Copy constructor called -> " << inst.getName() << " is cloned" << std::endl;
	this->name = inst.getName();
	this->hitPoints = inst.getHit();
	this->energiePoint = inst.getEnergie();
	this->attackDammage =inst.getDammage();
	this->getProfil();
}
void	ClapTrap::operator=(const ClapTrap &inst){
	callClapTrapAnnouce();
	std::cout << "Assignation operator called -> " << inst.getName() << " is cloned, ";
	std::cout << "now " << this->getName() << " is " << inst.getName() << std::endl;
	this->name = inst.getName();
	this->hitPoints = inst.getHit();
	this->energiePoint = inst.getEnergie();
	this->attackDammage =inst.getDammage();
	this->getProfil();
}
ClapTrap::~ClapTrap(){
	callClapTrapAnnouce();
	std::cout << "Destructor called -> " << this->getName() << " is dead" << std::endl;
}

//Utils functions
std::string		ClapTrap::getName() const{
	return this->name;
}
unsigned int	ClapTrap::getHit() const{
	return this->hitPoints;
}
unsigned int	ClapTrap::getEnergie() const{
	return this->energiePoint;
}
unsigned int	ClapTrap::getDammage() const{
	return this->attackDammage;
}
void			ClapTrap::getProfil(){
	std::cout << "\t" << BLUE << this->getName();
	std::cout << " ~ " << WHITE << "Hit point : " << BLUE << this->getHit();
	std::cout << WHITE << " Energie : " << BLUE << this->getEnergie();
	std::cout << WHITE << " Dammage : " << BLUE << this->getDammage() << WHITE << std::endl << std::endl;
}

//Game functions
void	ClapTrap::attack(std::string const &target){
	callClapTrapAnnouce();
	if (this->getEnergie() == 0 || this->getHit() == 0){
		std::cout << this->getName() << " does not have enough energy to attack" << std::endl;
	}
	else{
		this->energiePoint--;
		std::cout << this->getName() << " attack " << target << ", causing " << this->getDammage() << " points of damage!" << std::endl;
	}
	this->getProfil();
}
void	ClapTrap::takeDamage(unsigned int amount){
	callClapTrapAnnouce();
	if (this->hitPoints - amount <= 0){
		this->hitPoints = 0;
		std::cout << this->getName() << " has one foot in the grave" << std::endl;
	}
	else{
		this->hitPoints -= amount;
		std::cout << this->getName() << " suffered a damage of " << amount << " points" << std::endl;
	}
	this->getProfil();
}
void	ClapTrap::beRepaired(unsigned int amount){
	callClapTrapAnnouce();
	if (this->hitPoints == 15){
		std::cout << this->getName() << " already has a full energy gauge" << std::endl;
	}
	else if (this->hitPoints + amount > 15){
		std::cout << this->getName() << " healed herself and regained " << 15 - this->getHit() << " hit points" << std::endl;
		this->hitPoints = 15;
		this->energiePoint--;
	}
	else{
		this->hitPoints += amount;
		std::cout << this->getName() << " healed herself and regained " << amount << " hit points" << std::endl;
		this->energiePoint--;
	}
	this->getProfil();
}


//Qnnexe function
void	callClapTrapAnnouce(){
	std::cout << BLUE << CLAPTRAP << WHITE;
}