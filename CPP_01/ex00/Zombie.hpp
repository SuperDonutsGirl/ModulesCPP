/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:10:11 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/29 13:10:13 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
    private:
        std::string	_name;
    public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

        void		annouce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
