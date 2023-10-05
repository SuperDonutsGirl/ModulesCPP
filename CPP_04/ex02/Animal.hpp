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

class Animal
{
	protected:
		std::string type;
	public:
	Animal();
		Animal(std::string type);
		Animal(const Animal &inst);
		virtual ~Animal();
		
		Animal		&operator=(const Animal &inst);

		void				setType(const std::string &type);
		const std::string	&getType() const;

		virtual void		makeSound() const = 0; //Fonction virtuelle pure
};

#endif

