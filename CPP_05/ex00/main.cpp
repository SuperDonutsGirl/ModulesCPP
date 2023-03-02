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

    std::cout << "\t~Bureaucrat creation~" << std::endl;

    Bureaucrat Random; 
    Bureaucrat Robert("Robert", 10);
    Bureaucrat Bobby("Bobby", 300);

    std::cout << std::endl << "\t~Presentation~" << std::endl;
    std::cout << Random << Robert << Bobby;

    std::cout << std::endl << "\t~Play with bureaucrat's grades~" << std::endl;
    Random.incrementGrade();
    std::cout << Random;
    Robert.incrementGrade();
    std::cout << Robert;
    Bobby.decrementGrade();
    std::cout << Bobby;
    Robert.decrementGrade();
    std::cout << Robert;

    std::cout << std::endl << "\t~Kill all bureaucrats~" << std::endl;
    return 0;
}
