/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:19:21 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/13 14:19:23 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;

	std::cout << BLUE << "----------------------------------------------------------------------------" << std::endl;
	std::cout << GREEN << "    Welcome to your Awesome PhoneBook";
	std::cout << GREEN << "You can se the following commands :" << std::endl;
	std::cout << GREEN << "\tADD -> for add new contact" << std::endl;
	std::cout << GREEN << "\tSEARCH -> for search contact" << std::endl;
	std::cout << GREEN << "\tEXIT -> for quit your awesome PhoneBook" << "\e[39m" << std::endl;
	std::cout << BLUE << "----------------------------------------------------------------------------" << std::endl;

	getCommand(book);
	return 0;
}
