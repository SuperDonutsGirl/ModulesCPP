/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:02:52 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/29 16:02:54 by pamartin         ###   ########.fr       */
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

        void        setName(std::string name);
        void		annouce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif

