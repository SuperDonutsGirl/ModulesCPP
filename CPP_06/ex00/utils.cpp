/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:07:25 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/22 18:07:26 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	isChar(std::string element){
	if (element.length() == 1 && !isdigit(element[0]))
		return true;
	return false;
}

void	displayChar(char element){
	std::cout << "char: ";
	if (element >= CHAR_MIN && element <= CHAR_MAX){
		if (isprint(element))
			std::cout << "'" << element << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	convertToChar(std::string element){
	char convert = static_cast<char>(element[0]);

	displayChar(convert);
}