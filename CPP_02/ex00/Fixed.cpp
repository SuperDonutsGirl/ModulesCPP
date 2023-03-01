/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:00:00 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/12 20:00:02 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructors
Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed(const Fixed &f){
	std::cout << "Copy constructor called" << std::endl;
	operator=(f);
}

void	Fixed::operator=(const Fixed &f){
	std::cout << "Copy assignment operator called" << std::endl;
	this->number = f.getRawBits();
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->number;
}

void	Fixed::setRawBits(const int raw){
	this->number = raw;
}

