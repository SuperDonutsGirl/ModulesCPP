/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:14:08 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/17 23:14:10 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	ScavTrap Pauline ("Pauline");
	ScavTrap Scav(Pauline);

	Scav.setName("Clone");

	ClapTrap Clap("Clapounet");

	
	Scav.attack("robert");
	Clap.attack(Scav.getName());
	Scav.guardGate();

	Clap.takeDamage(Scav.getDammage());
	Scav.takeDamage(Clap.getDammage());
	Scav.takeDamage(Clap.getDammage());

	Clap.beRepaired(55);
	Scav.beRepaired(55);
	Scav.beRepaired(55);

	return 0;
}
