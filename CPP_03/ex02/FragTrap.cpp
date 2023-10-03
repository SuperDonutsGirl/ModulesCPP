/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:48:21 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/19 15:48:22 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//Orthodox canonical form
FragTrap::FragTrap(){
	callFragTrapAnnouce();
	std::cout << "Default constructor called " << std::endl;
	std::cout << PURPLE << "\t" << this->getName() << " ~" << WHITE;
	std::cout << " is a FragTrap instance of ClapTrap class\n" << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name){
	callFragTrapAnnouce();
	std::cout << "Default constructor called with parameter called" << std::endl;
	std::cout << PURPLE << "\t" << this->getName() << " ~" << WHITE;
	std::cout << " is a FragTrap instance of " << this->getName() << " (ClapTrap instance)\n" << std::endl;
}
FragTrap::FragTrap(const FragTrap &inst) : ClapTrap(inst){
	callFragTrapAnnouce();
	std::cout << "Copy constructor called -> " << inst.getName() << " is clone of ";
	std::cout << this->getName() << " (ClapTrap instance) "  << "\n" << std::endl;
	this->setInstanceAttributs(inst);
}
FragTrap	&FragTrap::operator=(const FragTrap &inst){
	callFragTrapAnnouce();
	std::cout << "Assignation operator called -> " << inst.getName() << " is cloned, ";
	std::cout << "now " << this->getName() << " is " << inst.getName() << "\n" << std::endl;
	this->setInstanceAttributs(inst);

	return *this;
}
FragTrap::~FragTrap(){
	callFragTrapAnnouce();
	std::cout << "Destructor called -> " << this->getName() << " is dead" << std::endl;
}

//Functions
void	FragTrap::highFivesGuys(){
	callFragTrapAnnouce();
	std::cout << PURPLE << this->getName() << " ~ ";
	std::cout << WHITE << "Hey guys , you'r are wondeful Trap high fives !\n" << std::endl;
}

//Annexe function
void	callFragTrapAnnouce(){
	std::cout << PURPLE << FRAGTRAP << WHITE;
}
