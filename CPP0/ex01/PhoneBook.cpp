/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:18:27 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/13 14:18:28 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::addContact()
{
	int	index;

	showAddInstructions();
	this->contact++;
	if (this->size == 8){
		this->size--;
		index = this->older;
		if (this->older < 8)
			this->older++;
		else
			this->older = 0;
	}
	else
		index = this->size;
	if (this->size < 8)
	{
		std::cout << BLUE << "Firstname      : " << WHITE;
		std::getline(std::cin, this->contacts[index].getFirstName());
		std::cin.clear();
		std::cout << BLUE << "Lastname       : " << WHITE;
		std::getline(std::cin, this->contacts[index].getLastName());
		std::cin.clear();
		std::cout << BLUE << "Nickname       : " << WHITE;
		std::getline(std::cin, this->contacts[index].getNickName());
		std::cin.clear();
		std::cout << BLUE << "Phone number   : " << WHITE;
		std::getline(std::cin, this->contacts[index].getNumber());
		std::cin.clear();
		while (!goodNumber(this->contacts[index].getNumber())){
			std::cout << BLUE << "Phone number   : " << WHITE;
			std::getline(std::cin, this->contacts[index].getNumber());
			std::cin.clear();
		}
		std::cout << BLUE << "Darkset secret : " << WHITE;
		std::getline(std::cin, this->contacts[index].getSecret());
		std::cin.clear();
		this->size++;
		std::cout << GREEN << "\t\t\tContact Added Successfully!" << WHITE << std::endl;
		std::cout << BLUE << "----------------------------------------------------------------------------" << std::endl;
	}
}

void	PhoneBook::displayIndexBook()
{
    showSearchInstructions();
    std::cout <<  BLUE << "+----------+----------+----------+----------+" << std::endl;
    std::cout <<  BLUE << "|" << GREEN << "index     " << BLUE << "|" << GREEN << "firstname " << BLUE "|" << GREEN << "lastname"  << BLUE "  |" << GREEN << "nickname"  << BLUE "  |" << GREEN << "" << std::endl;
    std::cout <<  BLUE << "+----------+----------+----------+----------+" << std::endl;
    
    for (int i = 0; i < this->size; i++){
        std::cout <<  "|";
        std::cout << std::setw(10) << i << "|";
        formatData(this->contacts[i].getFirstName());
        formatData(this->contacts[i].getLastName());
        formatData(this->contacts[i].getNickName());
        std::cout << std::endl;
        std::cout <<  "+----------+----------+----------+----------+" << std::endl;
    }
    if (this->contact == 0){
        std::cout << GREEN << "WARNING : Empty PhoneBook" << std::endl;
	    std::cout << BLUE << "----------------------------------------------------------------------------" << std::endl;
    }
    else
        getIndex();
}

void   PhoneBook::displayIndex(int id)
{
    std::cout << BLUE << "----------------------------------------------------------------------------" << std::endl;
	std::cout << GREEN << "\t\t\t\tCONTACT NUMERO " << id << std::endl;
	std::cout << BLUE << "----------------------------------------------------------------------------" << std::endl;
    std::cout << GREEN << "Firstname      : ";
    this->contacts[id].displayFirstName(this->contacts[id].getFirstName());
    std::cout << GREEN << "Lastname       : ";
    this->contacts[id].displayLastName(this->contacts[id].getLastName());
    std::cout << GREEN << "Nickname       : ";
    this->contacts[id].displayNickName(this->contacts[id].getNickName());
    std::cout << GREEN << "Number         : ";
    this->contacts[id].displayNumber(this->contacts[id].getNumber());
    std::cout << GREEN << "Darkset secret : ";
    this->contacts[id].displaySecret(this->contacts[id].getSecret());
	std::cout << BLUE << "----------------------------------------------------------------------------" << std::endl;
}

void PhoneBook::getIndex(void)
{
    std::string index;
    int         id;

	std::cout << BLUE << "Index   :  " << WHITE;
    std::getline(std::cin, index);
    std::cin.clear();
    id = index[0] - 48;
    if (validIndex(index, this->size))
	    this->displayIndex(id);
    else{
        std::cout << GREEN << "please enter new index" << std::endl;
        getIndex();
    }
}

void getCommand(PhoneBook book)
{
	std::string command;

	std::cout << BLUE << "Command :  " << WHITE;
	std::getline(std::cin, command);
	std::cin.clear();
	checkCommand(command, book);
}

void	checkCommand(std::string command, PhoneBook book)
{
	if (command == "EXIT")
		exit(0);
	else if (command == "ADD")
	{
		book.addContact();
		getCommand(book);
	}
	else if (command == "SEARCH")
	{
		book.displayIndexBook();
		getCommand(book);
	}
	else
	{
		std::cout << GREEN << "Invalid command\n" << std::endl;
		getCommand(book);
	}
}


