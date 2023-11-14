/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:24:51 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/24 17:24:53 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
    Data *first;
    Data *second;
    uintptr_t raw;


    //Allocate first data;
    first = new Data;

    //Get first data address with serialize function 
    raw = Serializer::serialize(first);
    std::cout << "First data bytes  : "; 
    std::cout << raw << std::endl;


    //Deserialize second data with first data address
    second = Serializer::deserialize(raw);

    
    //Get first data address with serialize function 
    raw = Serializer::serialize(second);
    std::cout << "Second data bytes : "; 
    std::cout << raw << std::endl;

    std::cout << "First adr  : " << first << std::endl;
    std::cout << "Second adr : " << second << std::endl;

    //Add data at fisrt data
    first->content = "Whouu a new content";
    //print content of both data
    std::cout << "Content first data : "<< first->content << std::endl;
    std::cout << "Content second data : " << second->content << std::endl;

    delete first;

    return 0;
}
