/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 13:09:45 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/29 13:09:48 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    Zombie *Pamartin = newZombie("Pamartin");
    Zombie Truc = Zombie("Truc");

    Pamartin->annouce();

    Truc.annouce();

    delete(Pamartin);
    
    randomChump("Jean-Mi");

    return 0;
}
