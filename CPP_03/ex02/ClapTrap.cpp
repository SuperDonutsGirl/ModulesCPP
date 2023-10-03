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
	this->setAttributs();
	callClapTrapAnnouce();
	std::cout << "Default constructor called -> " << this->getName() << " is born" << std::endl;
	this->getProfil();
}
ClapTrap::ClapTrap(std::string name){
	this->name = name;
	this->setAttributs();
	callClapTrapAnnouce();
	std::cout << "Default constructor with parameter called -> " << this->getName() << " is born" << std::endl;
	this->getProfil();
}
ClapTrap::ClapTrap(const ClapTrap &inst){
	callClapTrapAnnouce();
	std::cout << "Copy constructor called -> " << inst.getName() << " is cloned" << std::endl;
	this->setInstanceAttributs(inst);
	this->getProfil();
}
ClapTrap	&ClapTrap::operator=(const ClapTrap &inst){
	callClapTrapAnnouce();
	std::cout << "Assignation operator called -> " << inst.getName() << " is cloned, ";
	std::cout << "now " << this->getName() << " is " << inst.getName() << std::endl;
	this->setInstanceAttributs(inst);
	this->getProfil();

	return *this;
}
ClapTrap::~ClapTrap(){
	callClapTrapAnnouce();
	std::cout << "Destructor called -> " << this->getName() << " is dead\n" << std::endl;
}

//Utils GET functions
std::string		ClapTrap::getName() const{
	return this->name;
}
unsigned int	ClapTrap::getHit() const{
	return this->hitPoints;
}
unsigned int	ClapTrap::getEnergie() const{
	return this->energiePoints;
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


//Utils SET functions
void	ClapTrap::setAttributs(){
	this->setHit(100);
	this->setEnergie(100);
	this->setDammage(30);
}
void	ClapTrap::setInstanceAttributs(const ClapTrap &inst){
	this->setName(inst.getName());
	this->setHit(inst.getHit());
	this->setEnergie(inst.getEnergie());
	this->setDammage(inst.getDammage());
}
void	ClapTrap::setName(const std::string name){
	this->name = name;
}
void	ClapTrap::setHit(unsigned int hit){
	this->hitPoints = hit;
}
void	ClapTrap::setEnergie(unsigned int energie){
	this->energiePoints = energie;
}
void	ClapTrap::setDammage(unsigned int dammage){
	this->attackDammage = dammage;
}

//Game functions
void	ClapTrap::attack(std::string const &target){
	callClapTrapAnnouce();
	if (this->getEnergie() == 0 || this->getHit() == 0){
		std::cout << this->getName() << " does not have enough energy to attack" << std::endl;
	}
	else{
		this->energiePoints--;
		std::cout << this->getName() << " attack " << target << ", causing " << this->getDammage() << " points of damage!" << std::endl;
	}
	this->getProfil();
}
void	ClapTrap::takeDamage(unsigned int amount){
	callClapTrapAnnouce();
	if (this->getHit() - amount <= 0){
		this->setHit(0);
		std::cout << this->getName() << " has one foot in the grave" << std::endl;
	}
	else{
		this->setHit(this->getHit() - amount);
		std::cout << this->getName() << " suffered a damage of " << amount << " points" << std::endl;
	}
	this->getProfil();
}
void	ClapTrap::beRepaired(unsigned int amount){
	callClapTrapAnnouce();
	if (this->hitPoints == 100){
		std::cout << this->getName() << " already has a full energy gauge" << std::endl;
	}
	else if (this->getHit() + amount > 100){
		std::cout << this->getName() << " healed herself and regained " << 100 - this->getHit() << " hit points" << std::endl;
		this->setHit(100);
		this->energiePoints--;
	}
	else{
		this->setHit(this->getHit() + amount);
		std::cout << this->getName() << " healed herself and regained " << amount << " hit points" << std::endl;
		this->energiePoints--;
	}
	this->getProfil();
}


//Annexe function
void	callClapTrapAnnouce(){
	std::cout << BLUE << CLAPTRAP << WHITE;
}