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
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
    std::cout << "\t~Form creation~" << std::endl;
    PresidentialPardonForm s19("Skip");
    PresidentialPardonForm s42("Archi");
    ShrubberyCreationForm  s123("Granny");
    RobotomyRequestForm    s987("My brain");


    std::cout << "\n\t~Bureaucrat creation~" << std::endl;
    Bureaucrat Bobette("Bobette", 1);
    Bureaucrat Bob("Bob", 80);


    std::cout << "\n\t~Manage forms with bureaucrat function~" << std::endl;
    Bobette.signForm(s19);
    Bob.signForm(s42);
    Bobette.signForm(s123);
    Bobette.signForm(s987);

    std::cout << "\n\t~Execute President's Forms~" <<std::endl;
    s19.execute(Bobette);
    s42.execute(Bob);
    Bobette.executeForm(s19);
    Bobette.executeForm(s42);

    std::cout << "\n\t~Execute Shrubbery's Forms~" <<std::endl;
    s123.execute(Bobette);
    Bob.executeForm(s123);

    std::cout << "\n\t~Execute Robotomy's Forms~" <<std::endl;
    for (int i = 0; i < 8; i++)
        s987.execute(Bobette);

    std::cout << std::endl << "\n\t~Kill all bureaucrats and forms~" << std::endl;
    return 0;
}
