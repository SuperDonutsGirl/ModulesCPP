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
	//std::cout << "Default constructor called" << std::endl;
	this->number = 0;
	getRawBits();
}
Fixed::Fixed(const Fixed &f){
	//std::cout << "Copy constructor called" << std::endl;
	operator=(f);
}
Fixed::Fixed(const int number){
	this->number = number << Fixed::fBits;
	//std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float number){
	this->number = (int)roundf(number * (1 << Fixed::fBits));
	//std::cout << "Float constructor called" << std::endl;
}

//Constructors with arithmetique operators
void	Fixed::operator=(const Fixed &f){
	//std::cout << "Assignation operator called" << std::endl;
	this->number = f.getRawBits();
}
Fixed 	Fixed::operator*(const Fixed &f) const{
	Fixed	multi;

	multi.setRawBits(this->getRawBits() * f.getRawBits() >> Fixed::fBits);
	return multi;
}
Fixed 	Fixed::operator+(const Fixed &f) const{
	Fixed	plus;
	
	plus.setRawBits(this->getRawBits() + f.getRawBits());
	return plus;
}
Fixed 	Fixed::operator-(const Fixed &f) const{
	Fixed	less;

	less.setRawBits(this->getRawBits() - f.getRawBits());
	return less;
}
Fixed 	Fixed::operator/(const Fixed &f) const{
	Fixed	div;

	if (f.getRawBits() == 0){
		std::cout << BLUE << "Code will be abort with std::logic_error" << std::endl;
		throw std::logic_error("Division by 0 is impossible!");
	}
	div.setRawBits(this->getRawBits() / f.getRawBits());
	return div;
}

//Destructor
Fixed::~Fixed(){}

//Members functions
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

//Public functions with comparaison operators
bool	Fixed::operator>(const Fixed &f) const{
	return this->getRawBits() > f.getRawBits();
}
bool	Fixed::operator<(const Fixed &f) const{
	return this->getRawBits() < f.getRawBits();
}
bool	Fixed::operator>=(const Fixed &f) const{
	return this->getRawBits() >= f.getRawBits();
}
bool	Fixed::operator<=(const Fixed &f) const{
	return this->getRawBits() <= f.getRawBits();
}
bool	Fixed::operator==(const Fixed &f) const{
	return this->getRawBits() == f.getRawBits();
}
bool	Fixed::operator!=(const Fixed &f) const{
	return this->getRawBits() != f.getRawBits();
}

//Statics members functions
Fixed &Fixed::min(Fixed &a, Fixed &b){
	return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	return a >= b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
	return (Fixed)a < (Fixed)b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	return (Fixed)a >= (Fixed)b ? a : b;
}


//functions for overload
std::ostream&	operator<<(std::ostream& os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}



//Pre incrementation and decrementation
Fixed&	Fixed::operator++(){
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}
Fixed&	Fixed::operator--(){
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}
//Post incrementation and decrementation
Fixed	Fixed::operator++(int){
	Fixed	save(*this);

	this->setRawBits(this->getRawBits() + 1);
	return save;
}
Fixed	Fixed::operator--(int){
	Fixed	save(*this);

	this->setRawBits(this->getRawBits() - 1);
	return save;
}
