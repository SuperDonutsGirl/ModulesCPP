/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:20:39 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/12 20:20:41 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>


#define BLUE "\e[36m"

class Fixed
{
	private:
		int					number;
		static const int	fBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &f);
		Fixed(const int number);
		Fixed(const float number);


		void 	operator=(const Fixed &f);

		Fixed 	operator*(const Fixed &f) const;
		Fixed 	operator+(const Fixed &f) const;
		Fixed 	operator-(const Fixed &f) const;
		Fixed 	operator/(const Fixed &f) const;

		bool	operator>(const Fixed &f) const;
		bool	operator<(const Fixed &f) const;
		bool	operator>=(const Fixed &f) const;
		bool	operator<=(const Fixed &f) const;
		bool	operator==(const Fixed &f) const;
		bool	operator!=(const Fixed &f) const;

		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		~Fixed();

		int				getRawBits() const;
		void			setRawBits(int const raw);
		float			toFloat() const;
		int				toInt() const;

		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

};





std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);


#endif
