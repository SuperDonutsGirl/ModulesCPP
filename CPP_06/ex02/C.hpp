/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:09:41 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/24 18:09:41 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

#include "Base.hpp"

class C : public Base
{
    public:
        C();
        ~C();
};

C::C(){
    std::cout << "C constructor called!" << std::endl;

}

C::~C(){
    std::cout << "C destructor called!" << std::endl << std::endl;
}

#endif

