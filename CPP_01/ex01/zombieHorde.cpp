/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:03:37 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/29 16:03:42 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
    Zombie  *horde = new Zombie[N];
    for (int i =0; i < N; i++)
        horde[i].setName(name);
    return horde;
}
