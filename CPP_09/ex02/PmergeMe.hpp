/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:35:11 by pamartin          #+#    #+#             */
/*   Updated: 2023/11/07 12:35:12 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <deque>
#include <vector>

//Mise en place des container avec la liste des nombre
int fillContainer(char **list, std::deque<int> &deque, std::vector<int> &vector);

//Algo tri
std::deque<int> mergeInsertSortDeque(std::deque<int> list);
std::vector<int> mergeInsertSortVector(std::vector<int> list);

#endif

