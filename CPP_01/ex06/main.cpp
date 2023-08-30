/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:34:19 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/30 16:34:21 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2){
        std::cout << "I have too little or too much complaint guy !";
        return 1;
    }

    Harl Harl;

    Harl.complain(std::string(argv[1]));

    return 0;
}
