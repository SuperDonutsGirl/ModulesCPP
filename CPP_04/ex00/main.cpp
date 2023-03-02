/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:32:39 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/30 14:32:44 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << "\n\n~~~Now let's go with Wrong animals~~~\n" << std::endl;

	const WrongAnimal		*metaWrong = new WrongAnimal();
	const WrongAnimal		*k = new WrongCat();

	std::cout << k->getType() << " " << std::endl;
	std::cout << metaWrong->getType() << " " << std::endl;
	k->makeSound();
	metaWrong->makeSound();

	delete metaWrong;
	delete k;
}


