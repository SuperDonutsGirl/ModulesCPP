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


int main(){
	Animal	*animals[10];

	for (int i = 0; i < 10; i++){
		if (i % 2){
			animals[i] = new Cat();
			std::cout << std::endl;
		}
		else{
			animals[i] = new Dog();
			std::cout << std::endl;
		}
	}

	animals[0]->getBrain()->setIdea("blabla");

	std::cout << "1st idea of animals[0]" << std::endl;
	std::cout << animals[0]->getBrain()->getIdea(0) << std::endl;
	std::cout << "1st idea of animals[2]" << std::endl;
	std::cout << animals[2]->getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl;
	std::cout << "copy" << std::endl;
	*animals[2] = *animals[0];

	std::cout << "1st idea of animals[0]" << std::endl;
	std::cout << animals[0]->getBrain()->getIdea(0) << std::endl;
	std::cout << "1st idea of animals[2]" << std::endl;
	std::cout << animals[2]->getBrain()->getIdea(0) << std::endl;


	std::cout << std::endl;
	std::cout << std::endl;

	animals[0]->getBrain()->setIdea("blabla animals[0]");
	animals[2]->getBrain()->setIdea("blabla animals[2]");
	std::cout << "2nd idea of animals[0]" << std::endl;
	std::cout << animals[0]->getBrain()->getIdea(1) << std::endl;
	std::cout << "2nd idea of animals[2]" << std::endl;
	std::cout << animals[2]->getBrain()->getIdea(1) << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\tDelete Animals" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

}


