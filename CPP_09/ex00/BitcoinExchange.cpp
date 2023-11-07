/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 13:07:54 by pamartin          #+#    #+#             */
/*   Updated: 2023/03/28 13:07:55 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//Utils pour parsing de l'input
bool isDateValid(int year, int month, int day) {
    if (year < 2009 || month < 1 || month > 12 || day < 1 || day > 31)
        return false;
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return day <= 30;
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return day <= 29;
        else
            return day <= 28;
    }
    return true;
}

int getDate(const std::string &line, int &year, int &month, int &day) {
    if (line[4] != '-' || line[7] != '-')
        return 0;
    try{
        year = std::stoi(line.substr(0, 4));
        month = std::stoi(line.substr(5, 2));
        day = std::stoi(line.substr(8, 3));
        return 1;
    }
    catch(const std::exception& e){
        return 1;
    }
}

int isGoodData(std::string line, int &i, double &value){
    int year, month, day;
    int result = getDate(line, year, month, day);

    if (!result || !isDateValid(year, month, day)){
        std::cout << ERR_BAD_INPUT << line << std::endl;
        return 0;
    }

    int pipe = 0;
    while (line[i] && pipe <= 1 && (line[i] == ' ' || line[i] == '|')){
        if (line[i] == ' ')
            i++;
        if (line[i] == '|'){
            pipe += 1;
            i++;
        }
    }
    if (pipe > 1 || !line[i]){
        std::cout << ERR_BAD_INPUT << line << std::endl;
        return 0;
    }
    value = std::stof(line.substr(i));
    if (value < 0){
        std::cout << ERR_NEGATIVE << std::endl;
        return 0;
    }
    if (value > INT_MAX){
        std::cout << ERR_TOO_LARGE << std::endl;
        return 0;
    }
    return 1;
}

//Stocker les valeurs de data dans une Map
std::map<int, double> fillMap(){
    std::ifstream data;
    data.open("data.csv");
    std::map<int, double> dataMap;

    std::string line;
    std::getline(data, line);
    while (std::getline(data, line)){
        std::string dateStr = line.substr(0,10);
        dateStr.erase(std::remove(dateStr.begin(), dateStr.end(), '-'), dateStr.end());
        std::string valueStr = line.substr(11);
        try{
            dataMap.insert(std::make_pair(std::stoi(dateStr),std::stof(valueStr)));
        }
        catch(const std::exception& e){
            std::cout << "Error: data.csv is corrompute" ;
            exit; 
        }
        
    }

    data.close();
    return dataMap;
}

//Calculer la valeur de l'investissement
double getValue(std::string line, double value, std::map<int, double> dataMap){
    std::string dateInput = line.substr(0,10);
    dateInput.erase(std::remove(dateInput.begin(), dateInput.end(), '-'), dateInput.end());
    int date = std::stoi(dateInput);

    std::map<int, double>::iterator it = dataMap.lower_bound(date);
    if (it != dataMap.begin() && it->first != date)
        return value * (--it)->second;
    else
        return value * it->second;
}