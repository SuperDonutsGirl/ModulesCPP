/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:08:01 by pamartin          #+#    #+#             */
/*   Updated: 2023/03/28 13:08:02 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <map>

#define INPUT_FORMAT "date | value"
#define ERR_OPEN "Error: could not open file."
#define ERR_INPUT_FORMAT "Error: bad format."
#define ERR_NEGATIVE "Error: not a positive number."
#define ERR_BAD_INPUT "Error: bad input => "
#define ERR_TOO_LARGE "Error: too large a number."

//Utils pour parsing de l'input
bool isDateValid(int year, int month, int day);
int getDate(const std::string &line, int &year, int &month, int &day);
int isGoodData(std::string line, int &i, double &value);

//Stocker les valeurs de data dans une Map
std::map<int, double> fillMap();

//Calculer la valeur de l'investissement
double getValue(std::string line, double value, std::map<int, double> dataMap);

#endif
