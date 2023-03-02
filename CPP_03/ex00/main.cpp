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

int main(){
	ClapTrap Bobette("Bobette");
	ClapTrap Robert ("Robert");
	ClapTrap Empty;
	ClapTrap Clone(Robert);

	Empty = Bobette;

	Bobette.attack(Robert.getName());

	Bobette.takeDamage(Robert.getDammage());

	Bobette.attack(Robert.getName());
	Bobette.attack(Robert.getName());
	Bobette.attack(Robert.getName());

	Bobette.beRepaired(3);
	Bobette.beRepaired(3);
	Bobette.beRepaired(3);

	return 0;
}
