/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:22:19 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/29 16:22:20 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "string address    : " << &string << std::endl;
    std::cout << "stringPTR address : " << stringPTR << std::endl;
    std::cout << "stringREF address : " << &stringREF << std::endl;

    std::cout << "string value    : " << string << std::endl;
    std::cout << "stringPTR value : " << *stringPTR << std::endl;
    std::cout << "stringREF value : " << stringREF << std::endl;
    
}
