/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:57:58 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/28 12:57:59 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <set>
#include <list>
#include <vector>

template <typename T>
typename T::iterator	easyfind(T &container, int element){
	typename T::iterator it;
	
	it = std::find(container.begin(), container.end(), element);
	if (it == container.end())
		throw std::invalid_argument("does not exist in this container");
	return it;
}

#endif
