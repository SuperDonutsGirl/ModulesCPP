/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:18:39 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/13 14:18:41 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
		Contact contacts[8];
		int		size;
		int		older;
		int		contact;
    public:
		PhoneBook () : size(0), older(0), contact(0){}
			void	addContact();
			void	displayIndexBook();
			void	displayIndex(int index);
			void	getIndex();
};

void	checkCommand(std::string command, PhoneBook book);
void 	getCommand(PhoneBook book);




#endif
