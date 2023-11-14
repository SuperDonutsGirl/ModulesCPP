/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:09:18 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/24 18:09:21 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

#include "Base.hpp"

class A : public Base
{
    public:
        A();
        ~A();
};

A::A(){
    std::cout << "A constructor called!" << std::endl;
}

A::~A(){
    std::cout << "A destructor called!" << std::endl;
}

#endif
