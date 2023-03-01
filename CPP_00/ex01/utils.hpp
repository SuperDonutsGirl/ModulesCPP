/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:36:08 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/13 14:36:09 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <iomanip>

#define WHITE "\e[39m"
#define BLUE "\e[36m"
#define GREEN "\e[32m"

//Utils for PhonBook class elements
int		goodNumber(std::string number);
void	showAddInstructions();
void	showSearchInstructions();
void    formatData(std::string str);
int    validIndex(std::string index, int size);


#endif
