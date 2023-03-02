/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:34:47 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/30 14:34:50 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *brain;
    public:
        Dog();
		Dog(const Dog &inst);
        ~Dog();

        //Dog		&operator=(const Dog &inst);
        Animal&	    operator=(const Animal& inst);

        void        makeSound() const;
        Brain		*getBrain() const;
};

#endif
