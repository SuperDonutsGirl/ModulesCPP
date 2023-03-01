/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:35:55 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/13 14:35:57 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int		goodNumber(std::string number)
{
	int	count;
	size_t	i;

	i = 0;
	count = 0;
	while (number[i]){
		if ((number[i] < 48 || number[i] > 57) && number[i] != 32){
			std::cout << GREEN << "Please enter a valid number: a number contains only digits and spaces" << std::endl;
			return 0;
		}
		if (number[i] != 32){
			count++;
		}
		i++;
	}
	if (count != 10){
		std::cout << GREEN << "Please enter a valid number: a number must contain 10 digits" << std::endl;
		return 0;
	}
	return 1;
}

void	showAddInstructions()
{
	std::cout << BLUE << "----------------------------------------------------------------------------" << std::endl;
	std::cout << GREEN << "\t\t\t\tNEW CONTACT" << std::endl;
	std::cout << "\t\t   Please complete the following fields" << std::endl;
	std::cout << BLUE << "----------------------------------------------------------------------------" << std::endl;
}

void	showSearchInstructions()
{
	std::cout << BLUE << "----------------------------------------------------------------------------" << std::endl;
	std::cout << GREEN << "\t\t\t\tSEARCH CONTACT" << std::endl;
	std::cout << "\tPlease enter the index of the contact to see his complete file" << std::endl;
	std::cout << BLUE << "----------------------------------------------------------------------------" << std::endl;
}

void formatData(std::string str)
{
    if (str.length() > 10){
        std::cout << str.substr(0, 9);
		std::cout << "." << "|";
    }
    else
        std::cout << std::setfill (' ') << std::setw(10) << str << "|";
}

int    validIndex(std::string index, int size)
{
    int id;

    if (index.length() != 1 || (index[0] < 48 || index[0] > 59)){
        std::cout << GREEN << "Invalid index ";
        return 0;
    }
    id = index[0] - 48;
    if (id > size - 1){
        std::cout << GREEN << "There is no contact at this index ";
        return 0;
    }
    return 1;
}
