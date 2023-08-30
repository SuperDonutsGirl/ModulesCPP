/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:56:28 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/30 13:56:30 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();

        const std::string   &getType() const;
        void                setType(std::string type);
};

#endif
