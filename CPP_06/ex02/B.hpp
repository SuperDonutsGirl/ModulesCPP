/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:09:28 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/24 18:09:30 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

#include "Base.hpp"

class B : public Base
{
    public:
        B();
        ~B();
};

B::B(){
    std::cout << "B constructor called!" << std::endl;

}

B::~B(){
    std::cout << "B destructor called!" << std::endl << std::endl;

}

#endif

