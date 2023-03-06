/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:10:46 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/28 10:10:49 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
    Array<int>	        integer(5);
    Array<int>          copy;
    Array<std::string>  string(6);
    Array<float>        floattype(7);
    Array<char>         chartype(8);

    for (unsigned int i = 0; i < integer.size(); i++){
        integer[i] = i;
    }

    for (unsigned int i = 0; i < string.size(); i++){
        string[i] = "element_";
        string[i] += static_cast<char>(i + 48);
    }

    float nb = 0.042f;
    for (unsigned int i = 0; i < floattype.size(); i++){
        floattype[i] = nb++;
    }

    for (unsigned int i = 0; i < chartype.size(); i++){
        chartype[i] = i + 97;
    }
    
    std::cout << "\nPrint all arrays and size " << std::endl;
    std::cout << integer << "  _size:" << integer.size() << std::endl;
    std::cout << string << "  _size:" << string.size() << std::endl;
    std::cout << floattype << "  _size:" << floattype.size() << std::endl;
    std::cout << chartype << "  _size:" << chartype.size() << std::endl;


    std::cout << "\nPrint arrays before copy " << std::endl;
    std::cout << "original : " << integer << "  _size:" << integer.size() << std::endl;
    std::cout << "copy     : " << copy << "  _size:" << copy.size() << std::endl;

    std::cout << "\nPrint arrays after copy " << std::endl;
    copy = integer;
    std::cout << "original : " << integer << "  _size:" << integer.size() << std::endl;
    std::cout << "copy     : " << copy << "  _size:" << copy.size() << std::endl;

    std::cout << "\nPrint arrays after modify content of original array" << std::endl;
    integer[0] = -1;
    std::cout << "original : " << integer << "  _size:" << integer.size() << std::endl;
    std::cout << "copy     : " << copy << "  _size:" << copy.size() << std::endl;


    // Try accessing element with an index out of bounds
    // std::cout << chartype[10] << std::endl;
    return 0;
}
