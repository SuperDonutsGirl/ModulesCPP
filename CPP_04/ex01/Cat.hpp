/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:34:13 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/30 14:34:17 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain   *brain;
    public:
        Cat();
		Cat(const Cat &inst);
        ~Cat();

        // Cat		&operator=(const Cat &inst);
        Animal&	operator=(const Animal& inst);
        void        makeSound() const;
        Brain		*getBrain() const;
};

#endif
