/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:28:29 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/20 16:28:29 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <class T> void swap(T &a, T &b){
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <class T> T min(T a, T b){
    return a < b ? a : b;
}

template <class T> T max(T a, T b){
    return a > b ? a : b;
}
#endif
