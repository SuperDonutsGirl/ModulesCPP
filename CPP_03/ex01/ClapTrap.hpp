/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:13:53 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/17 23:13:57 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#define CLAPTRAP "ClapTrap ~ "

#define WHITE "\e[39m"
#define GREEN "\e[32m"
#define BLUE  "\e[36m"

class ClapTrap
{
private:
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energiePoints;
	unsigned int	attackDammage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &inst);
	void	operator=(const ClapTrap &inst);
	~ClapTrap();

	std::string		getName() const;
	unsigned int 	getHit() const;
	unsigned int 	getEnergie() const;
	unsigned int 	getDammage() const;
	void			getProfil();

	void			setAttributs();
	void			setInstanceAttributs(const ClapTrap &inst);
	void			setName(std::string	name);
	void			setHit(unsigned int hit);
	void			setEnergie(unsigned int energie);
	void			setDammage(unsigned int dammage);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

void	callClapTrapAnnouce();




#endif
