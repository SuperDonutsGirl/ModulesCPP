/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:34:45 by pamartin          #+#    #+#             */
/*   Updated: 2023/11/07 12:35:04 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

// Mise en place des container avec la liste des
int fillContainer(char **list, std::deque<int> &deque, std::vector<int> &vector)
{
    int i = 1;

    int num;
    while (list[i])
    {
        int y = 0;
        while (list[i][y] && (list[i][y] >= '0') && (list[i][y] <= '9')){
            y++;
        }
        if (list[i][y])
        {
            std::cout << "Error" << std::endl;
            return 0;
        }
        i++;
    }

    i = 1;
    while (list[i]){
        std::string numStr;
        int y = 0;
        while (list[i][y]){
            numStr += list[i][y];
            y++;
        }
        num = std::stod(numStr);
        if (num > INT_MAX){
            std::cout << "Error" << std::endl;
            return 0;
        }
        else{
            deque.push_back(num);
            vector.push_back(num);
        }
        i++;
    }
    return 1;
}
