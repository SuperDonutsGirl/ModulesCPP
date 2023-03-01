/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:19:02 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/13 14:19:05 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "utils.hpp"

class Contact{
	private :
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	secret;
		std::string	number;
	public :
		std::string &getFirstName(void);
		std::string &getLastName(void);
		std::string &getNickName(void);
		std::string &getSecret(void);
		std::string &getNumber(void);
		void displayFirstName(std::string firstname);
		void displayLastName(std::string lastname);
		void displayNickName(std::string nickname);
		void displaySecret(std::string secret);
		void displayNumber(std::string number);
};

#endif
