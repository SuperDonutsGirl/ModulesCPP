/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:24:56 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/22 16:24:57 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
private:
    typedef AForm	*(Intern::*Fpointer)(std::string);
    Fpointer    form[3];
    std::string _formList[3];
public:
    Intern();
    Intern(const Intern &inst);
    Intern &operator=(Intern const &inst);
    ~Intern();

    AForm    *newPresident(std::string target);
    AForm    *newRobotomy(std::string target);
    AForm    *newShrubbery(std::string target);

    AForm    *makeForm(std::string name, std::string target);
};






#endif
