/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:07:33 by pamartin          #+#    #+#             */
/*   Updated: 2023/03/28 13:07:34 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int msg_error(std::string msg){
    std::cout << msg << std::endl;
    return 1;
}

int main(int argc, char **argv){
    if (argc != 2)
        return msg_error("Error: bad arguments");
    argv++;
}
