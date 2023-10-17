/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identification.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:50:33 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/22 18:50:34 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertor.hpp"

static bool isExeption(std::string element, int type){
	if (type == FLOAT)
		return element == "+inff" || element == "-inff" || element == "nanf";
	else
		return element == "+inf" || element == "-inf" || element == "nan";
}

bool	isChar(std::string element){
	if (element.length() == 1 && !isdigit(element[0]))
		return true;
	return false;
}

bool	isInt(std::string element){
	for (size_t i = 0; i < element.length(); i++){
		if (i == 0 && element[0] == '-')
			continue ;
		if (!isdigit(element[i]))
			return false;
	}
	return true;
}

bool isFloat(std::string element){
	if (element[element.length() - 1] != 'f')
		return false;
	if (isExeption(element, FLOAT))
		exit (displayExecption(element, FLOAT));
	int dot = 0;
	for (size_t i = 0 ;i < element.length() - 1; i++){
		if (i == 0 && element[0] == '-')
			continue ;
		if (element[i] == '.')
			dot++;
		else if (!isdigit(element[i]))
			return false;
	}
	return dot == 1;
}

bool isDouble(std::string element){
	if (isExeption(element, DOUBLE))
		exit (displayExecption(element, DOUBLE));
	int dot = 0;
	for (size_t i = 0; i < element.length(); i++){
		if (i == 0 && element[0] == '-')
			continue ;
		if (element[i] == '.')
			dot++;
		else if (!isdigit(element[i]))
			return false;
	}
	return dot == 1;
}

