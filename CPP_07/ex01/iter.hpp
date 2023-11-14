/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:47:10 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/20 16:47:11 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void printTab(T &element){
    std::cout << "element   = " << element << std::endl;
}

template <typename T>
void getAdr(T &element){
    std::cout << "Address   = " << &element << std::endl;
}

template <typename T>
void iter(T *tab, size_t _size, void (*f)(T &)){
    for (size_t i = 0; i < _size; i++) {
        f(tab[i]);
    }
}

#endif
