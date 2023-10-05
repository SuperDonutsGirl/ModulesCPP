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


int main()
{
	Animal *animals[10];

	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
		{
			animals[i] = new Cat();
			std::cout << std::endl;
		}
		else
		{
			animals[i] = new Dog();
			std::cout << std::endl;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\tDelete Animals" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\tCreate neew animals and play with their brain" << std::endl;

	Cat catty;
	Cat cattyBis;

	std::cout << std::endl;
	std::cout << std::endl;

	catty.getBrain()->setIdea("blabla");

	std::cout << "1st idea of Catty" << std::endl;
	std::cout << catty.getBrain()->getIdea(0) << std::endl;
	std::cout << "1st idea of CattyBis" << std::endl;
	std::cout << cattyBis.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	cattyBis = catty;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "1st idea of Catty" << std::endl;
	std::cout << catty.getBrain()->getIdea(0) << std::endl;
	std::cout << "1st idea of CattyBis" << std::endl;
	std::cout << cattyBis.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	catty.getBrain()->setIdea("blabla Catty");
	cattyBis.getBrain()->setIdea("blabla CattyBis");
	std::cout << "2nd idea of Catty" << std::endl;
	std::cout << catty.getBrain()->getIdea(1) << std::endl;
	std::cout << "2nd idea of CattyBis" << std::endl;
	std::cout << cattyBis.getBrain()->getIdea(1) << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
}


