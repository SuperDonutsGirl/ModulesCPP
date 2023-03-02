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

int main(){
	ClapTrap Clap("Clap");
	ScavTrap Scav("Scav");
	FragTrap Frag("Frag");

	Frag.attack("Bobby");
	Frag.attack("Bobette");

	Scav.attack("Big boss");

	Frag.beRepaired(15);

	Frag.highFivesGuys();

	return 0;
}
