/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:57:05 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/30 13:57:07 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon		*weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif
