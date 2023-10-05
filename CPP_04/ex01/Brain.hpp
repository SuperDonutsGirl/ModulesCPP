/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:05:48 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/31 18:05:51 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string 			idea[100];
		unsigned int			id;
	public:
		Brain();
		Brain(const Brain &inst);
		~Brain();

		Brain&	operator=(const Brain& inst);
		
		void		setIdea(std::string idea);
		std::string	getIdea(unsigned int id);
};

#endif
