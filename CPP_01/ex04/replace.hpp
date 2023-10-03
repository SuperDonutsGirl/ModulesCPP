/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:25:54 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/30 14:25:55 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <unistd.h>

#define GREEN "\e[32m"

#define BAD_ARG "Replace must takes a filename and two string that must not be empty"
#define O_FILE "File can not open or read"
#define O_REP_FILE "Open replace file failed"
#define O_NOT_FILE "The first argument is not a file"
#endif
