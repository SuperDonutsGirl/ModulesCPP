/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:02:27 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/29 16:02:29 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    int N = 5;

    if (N < 1){
        std::cout << "Number must be superior to 1";
        return 1;
    }

    Zombie *horde = zombieHorde(N, "Pamartin");

    for (int i = 0; i < N; i++)
        horde[i].annouce();
    
    delete [] horde;

    return 0;
}
