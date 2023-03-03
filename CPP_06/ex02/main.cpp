/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:08:27 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/24 18:08:28 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void){
    int base = rand()%3;

    if (base == 0)
        return (new A);
    if (base == 1)
        return (new B);
    return (new C);
}

void identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "A";
    else if (dynamic_cast<B*>(p))
        std::cout << "B";
    else if (dynamic_cast<C*>(p))
        std::cout << "C";
    std::cout << std::endl;
}

void identify(Base& p){
    Base base;

    try{
        base = dynamic_cast<A&>(p);
        std::cout << "A";
    }
    catch (std::bad_cast){
        try{
            base = dynamic_cast<B&>(p);
            std::cout << "B";
        }
        catch(std::bad_cast){
            try{
                base = dynamic_cast<C&>(p);
                std::cout << "C";
            }
            catch(std::bad_cast){}
        }
    }
    std::cout << std::endl;
}

int main(){
    Base *base[15];

    for (int i = 0; i < 15; i++){
        std::cout << "~Base[" << i << "]~" << std::endl;
        base[i] = generate();
        std::cout << "Indentity with pointer   : ";
        identify(base[i]);
        std::cout << "Indentity with reference : ";
        identify(*base[i]);
        std::cout << std::endl << std::endl;
        delete base[i];
    }

    // A   *baseA = new A;
    // B   *baseB = new B;
    // C   *baseC = new C;
    // std::cout << "~Base - A ~" << std::endl;
    // std::cout << "Indentity with pointer   : ";
    // identify(baseA);
    // std::cout << "Indentity with reference : ";
    // identify(*baseA);
    // std::cout << std::endl << std::endl;
    // delete baseA;

    // std::cout << "~Base - B ~" << std::endl;
    // std::cout << "Indentity with pointer   : ";
    // identify(baseB);
    // std::cout << "Indentity with reference : ";
    // identify(*baseB);
    // std::cout << std::endl << std::endl;
    // delete baseB;

    // std::cout << "~Base - C ~" << std::endl;
    // std::cout << "Indentity with pointer   : ";
    // identify(baseC);
    // std::cout << "Indentity with reference : ";
    // identify(*baseC);
    // std::cout << std::endl << std::endl;
    // delete baseC;

    return 0;
}
