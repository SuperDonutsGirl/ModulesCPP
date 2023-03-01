/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:18:56 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/13 14:18:57 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string &Contact::getFirstName(void){
	return (this->firstname);
}

std::string &Contact::getLastName(void){
	return (this->lastname);
}

std::string &Contact::getNickName(void){
	return (this->nickname);
}

std::string &Contact::getSecret(void){
	return (this->secret);
}

std::string &Contact::getNumber(void){
	return (this->number);
}

void Contact::displayFirstName(std::string firstname){
	std::cout << BLUE << firstname << std::endl;
}

void Contact::displayLastName(std::string lastname){
	std::cout << BLUE << lastname << std::endl;
}

void Contact::displayNickName(std::string nickname){
	std::cout << BLUE << nickname << std::endl;
}

void Contact::displaySecret(std::string secret){
	std::cout << BLUE << secret << std::endl;
}

void Contact::displayNumber(std::string number){
	std::cout << BLUE << number << std::endl;
}
