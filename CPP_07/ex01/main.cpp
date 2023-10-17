/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:46:55 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/20 16:46:58 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(){
    const int			integer[] = {19, 42};
    const float			floater[] = {19.1f , 42.1f};
    const std::string	str[2] = {"ecole19", "ecole42"};

    std::cout << "~Integer~" << std::endl;
    iter(integer, 2, printTab);
    iter(integer, 2, getAdr);
	std::cout << "element[0] adr: " << &integer[0] << std::endl;
	std::cout << "element[1] adr: " << &integer[1] << std::endl;
    std::cout << std::endl;

    std::cout << "~Float~" << std::endl;
    iter(floater, 2, printTab);
    iter(floater, 2, getAdr);
	std::cout << "element[0] adr: " << &floater[0] << std::endl;
	std::cout << "element[1] adr: " << &floater[1] << std::endl;
    std::cout << std::endl;


    std::cout << "~String~" << std::endl;
    iter(str, 2, printTab);
    iter(str, 2, getAdr);
	std::cout << "element[0] adr: " << &str[0] << std::endl;
	std::cout << "element[1] adr: " << &str[1] << std::endl;
    std::cout << std::endl;

    return 0;
}
