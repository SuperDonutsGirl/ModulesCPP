/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:33:08 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/19 12:33:09 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define SCAVTRAP "ScavTrap ~ "

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &inst);
	ScavTrap	&operator=(const ScavTrap &inst);
	~ScavTrap();

	void attack(std::string const &target);
	void guardGate();
};

void	callScavTrapAnnouce();

#endif
