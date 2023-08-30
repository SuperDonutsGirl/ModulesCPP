/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:58:23 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/30 16:58:25 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();

    public:
        Harl();
        ~Harl();

        void complain(std::string level);
};


#endif
