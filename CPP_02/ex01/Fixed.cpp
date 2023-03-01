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

Fixed::Fixed(const int number){
	this->number = number << Fixed::fBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number){
	this->number = (int)roundf(number * (1 << Fixed::fBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
	getRawBits();
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
	//std::cout << "getRawBits member function called" << std::endl;
	return this->number;
}

void	Fixed::setRawBits(const int raw){
	this->number = raw;
}

float	Fixed::toFloat() const{
	return (float)this->number / (float)(1 << Fixed::fBits);
}

int		Fixed::toInt() const{
	return this->number >> Fixed::fBits;
}

std::ostream&	operator<<(std::ostream& os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}

