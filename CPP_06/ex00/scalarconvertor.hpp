/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarconvertor.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:52:05 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/22 18:52:08 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTOR_HPP
# define SCALARCONVERTOR_HPP

#include <iostream>
#include <iomanip>
#include <limits>
#include <cfloat>

enum e_type{
    FLOAT,
    DOUBLE
};

//Argument identification functions
bool	isChar(std::string element);
bool	isInt(std::string element);
bool    isFloat(std::string element);
bool    isDouble(std::string element);

//Display elements
void	displayChar(int element);
void    displayInt(int element);
void    displayFloat(float element);
void    displayDouble(double element);
void    displayProtectedInt(std::string element, int type);
int     displayExecption(std::string element, int type);

//Convert elements
void	convertToChar(std::string element);
void	convertToInt(std::string element);
void	convertToFloat(std::string element);
void	convertToDouble(std::string element);
#endif
