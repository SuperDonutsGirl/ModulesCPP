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

class Fixed
{
	private:
		int					number;
		static const int	fBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &f);
		void operator=(const Fixed &f);
		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);

};



#endif
