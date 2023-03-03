/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:50:54 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/22 18:50:55 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarconvertor.hpp"

void	convertToChar(std::string element){
	int convert = static_cast<int>(element[0]);

	displayChar(convert);
	displayInt(static_cast<int>(convert));
	displayFloat(static_cast<float>(convert));
	displayDouble(static_cast<double>(convert));
}

void	convertToInt(std::string element){
	try {
		int convert = std::stoi(element);

		displayChar(convert);
		displayInt(convert);
		displayFloat(static_cast<float>(convert));
		displayDouble(static_cast<double>(convert));
	}
	catch(const std::out_of_range&){
		std::cout << "Overflow : conversion is impossible" << std::endl;
	}
}

void	convertToFloat(std::string element){
	try {
		float	convert = std::stof(element);

		displayChar(static_cast<int>(convert));
		displayProtectedInt(element, FLOAT);
		displayFloat(convert);
		displayDouble(static_cast<double>(convert));
	}
	catch(const std::out_of_range&){
		std::cout << "Overflow : conversion is impossible" << std::endl;
	}
}

void	convertToDouble(std::string element){
	try{
		double convert = std::stod(element);

		displayChar(static_cast<int>(convert));
		displayProtectedInt(element, DOUBLE);
		displayFloat(static_cast<double>(convert));
		displayDouble(convert);
	}
	catch(const std::out_of_range&){
		std::cout << "Overflow : conversion is impossible" << std::endl;
	}
}
