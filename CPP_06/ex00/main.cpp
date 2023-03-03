/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:07:13 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/22 18:07:15 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarconvertor.hpp"

int main(int argc, char **argv){

	if (argc != 2){
		std::cout << "Bad Arg : Please enter only one argument" << std::endl;
		return 1;
	}

	std::string element = argv[1];

	if (isChar(element))
		convertToChar(element);
	else if (isInt(element))
		convertToInt(element);
	else if (isFloat(element))
		convertToFloat(element);
	else if (isDouble(element))
		convertToDouble(element);
	else{
		std::cout << "'" << element << "' can't be converted" << std::endl;
		return 1;
	}
	return 0;
}

