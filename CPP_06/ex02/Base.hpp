/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:08:59 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/24 18:09:01 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <random>
#include <iostream>
class Base
{
    public:
        virtual ~Base();
};

Base::~Base(){
    std::cout << "Base destructor" << std::endl;
}


#endif
