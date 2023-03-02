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
// #include "PresidentialPardonForm.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
    Intern  Bobby;
    AForm    *president;
    AForm    *shrubbery;
    AForm    *robot;
    AForm    *unknown;

    std::cout << "\t~Form creation~" << std::endl;
    president = Bobby.makeForm("presidential pardon", "Archi");
    shrubbery = Bobby.makeForm("shrubbery creation", "Granny");
    robot = Bobby.makeForm("robotomy request", "My brain");
    unknown = Bobby.makeForm("unknown", "unknown");


    std::cout << "\n\t~Bureaucrat creation~" << std::endl;
    Bureaucrat Bobette("Bobette", 1);


    std::cout << "\n\t~Manage forms with bureaucrat function~" << std::endl;
    if (president)
        Bobette.signForm(*president);
    if (shrubbery)
        Bobette.signForm(*shrubbery);
    if (robot)
        Bobette.signForm(*robot);
    if (unknown)
        Bobette.signForm(*unknown);

    std::cout << "\n\t~Execute allForms~" <<std::endl;
    president->execute(Bobette);
    shrubbery->execute(Bobette);
    robot->execute(Bobette);

    std::cout << std::endl << "\n\t~Kill all forms, the bureaucrat and the intern~" << std::endl;
    delete president;
    delete shrubbery;
    delete robot;
    return 0;
}
