/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:50:45 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/22 18:50:45 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarconvertor.hpp"

void	displayChar(int element){
	std::cout << "char: ";
	if (element >= 0 && element <= CHAR_MAX){
		if (isprint(element))
			std::cout << "'" << static_cast<char>(element) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
    else
        std::cout << "impossible" << std::endl;
}

void    displayInt(int element){
    std::cout << "int: ";
    if (element >= INT_MIN && element <= INT_MAX)
        std::cout << element << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

void    displayProtectedInt(std::string element, int type){
    try {
		std::stoi(element); 
        if (type == FLOAT)
		    displayInt(static_cast<int>(std::stof(element)));
        else
		    displayInt(static_cast<int>(std::stod(element)));
	}
	catch(const std::out_of_range&){
		std::cout << "int: impossible" << std::endl;
	}
}

void    displayFloat(float element){
    std::cout << "float: ";
    if (element >= std::numeric_limits<float>::lowest()
            && element <= std::numeric_limits<float>::max())
        std::cout << std::setprecision(1) << std::fixed << element << "f" << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

void    displayDouble(double element){
    std::cout << "double: ";
     if (element >= std::numeric_limits<double>::lowest()
            && element <= std::numeric_limits<double>::max())
        std::cout << std::setprecision(1) << std::fixed << element << std::endl;
    else
        std::cout << "impossible" << std::endl;
}

int    displayExecption(std::string element, int type){
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: ";
    std::cout << element;
    if (type == FLOAT){
        element.pop_back();
        std::cout << "\ndouble: " << element << std::endl;
    }
    else{
        std::cout << "f" << std::endl;
        std::cout << "double: " << element << std::endl;
    }
    return 0;
}


