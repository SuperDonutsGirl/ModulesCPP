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
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
	DiamondTrap Diamond("Bobette");


	Diamond.whoAmI();
	Diamond.getProfil();

	Diamond.attack("Robert");
	
	

	Diamond.guardGate();
	Diamond.highFivesGuys();

	return 0;
}
