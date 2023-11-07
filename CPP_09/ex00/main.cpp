/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:07:33 by pamartin          #+#    #+#             */
/*   Updated: 2023/03/28 13:07:34 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int msg_error(std::string msg){
    std::cout << msg << std::endl;
    return 1;
}

int main(int argc, char **argv){
    //Check des arg
    if (argc != 2)
        return msg_error(ERR_OPEN);

    //Ouverture de l'input et de la data
    std::ifstream input;
    input.open(argv[1]);
    std::ifstream data;
    data.open("data.csv");
    if (!input.is_open() || !data.is_open()){
        data.close();
        input.close();
        return msg_error(ERR_OPEN);
    }
    data.close();

    //Data stockée dans un container Map (paires clés/valeurs)
    std::map<int, double> dataMap = fillMap();

    //Lecture de l'input et ecriture dans l'output au fur et a mesure
    std::string line;
    std::getline(input, line);
    if (line != INPUT_FORMAT)
        return msg_error(ERR_INPUT_FORMAT);
    
    while (std::getline(input, line)){
        int i = 10;
        double value = 0;
        if (line.length() >= 10){
            if(!isGoodData(line, i, value))
                continue;
            else
                std::cout << line.substr(0, 10) << " => " << value << " = " << getValue(line, value, dataMap) << std::endl;
        }
        else
            std::cout << ERR_INPUT_FORMAT << std::endl;
    }
    input.close();
    return 0;
}
