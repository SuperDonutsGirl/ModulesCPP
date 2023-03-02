/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:33:17 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/30 14:33:21 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "iostream"
#include "Brain.hpp"

class Animal
{
	protected:
		std::string type;
	public:
		virtual ~Animal();
		
		virtual Animal		&operator=(const Animal &inst) = 0;

		void				setType(const std::string &type);
		const std::string	&getType() const;

		virtual void		makeSound() const;
		virtual Brain		*getBrain(void) const = 0;
};

#endif

