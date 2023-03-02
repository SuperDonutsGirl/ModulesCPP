/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:41:01 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/24 10:41:02 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define DIAMONDTRAP "DiamondTrap ~ "

class DiamondTrap : public ScavTrap, public FragTrap{
	private:
		std::string		name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &inst);
		void	operator=(const DiamondTrap &inst);
		~DiamondTrap();

		using	ScavTrap::attack;
		void 	whoAmI();
};

void	callDiamondTrapAnnouce();
#endif
