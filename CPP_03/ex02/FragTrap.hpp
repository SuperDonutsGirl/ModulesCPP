/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:48:28 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/19 15:48:30 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#define FRAGTRAP "FragTrap ~ "

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &inst);
	FragTrap	&operator=(const FragTrap &inst);
	~FragTrap();

	void	highFivesGuys(void);
};

void	callFragTrapAnnouce();

#endif
