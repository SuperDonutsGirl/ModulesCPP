/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:05:39 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/31 18:05:41 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	this->id = -1;
	std::cout << "His Brain was also coonstructed" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain was destroyed" << std::endl;
}

Brain&	Brain::operator=(const Brain& inst)
{
	for (int i = 0; i < 100; i++)
		this->idea[i] = inst.idea[i];
	this->id = inst.id;
	return (*this);
}



void	Brain::setIdea(std::string idea){
	this->id++;
	if (this->id == 100)
		this->id = 0;
	else
		this->idea[this->id] = idea;
}

std::string Brain::getIdea(int id){
	if (id >= 100)
		return "Unable to access an idea that exceeds the size of the brain";
	else
		return this->idea[id];
}
