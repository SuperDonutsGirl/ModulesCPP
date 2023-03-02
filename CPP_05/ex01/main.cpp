/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:08:00 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/13 16:08:01 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    std::cout << "\t~Form creation~" << std::endl;
    Form Random;
    Form s0800("s0800", 50, 50);

    std::cout << "\n\t~Form presentation~" <<std::endl;
    std::cout << Random << s0800;

    std::cout << "\n\t~Bureaucrat creation~" << std::endl;
    Bureaucrat Robert("Robert", 150);
    Bureaucrat Bobette("Bobette", 50);

    std::cout << "\n\t~Manage forms with form function~" << std::endl;
    Random.beSigned(Robert);
    s0800.beSigned(Robert);

    std::cout << "\n\t~Form State~" <<std::endl;
    std::cout << Random << s0800;

    std::cout << "\n\t~Manage forms with bureaucrat function~" << std::endl;
    Robert.signForm(Random);
    Robert.signForm(s0800);
    Bobette.signForm(s0800);

    std::cout << "\n\t~Form State~" <<std::endl;
    std::cout << Random << s0800;

    std::cout << std::endl << "\n\t~Kill all bureaucrats and forms~" << std::endl;
    return 0;
}
