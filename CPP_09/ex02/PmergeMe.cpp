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
        if (list[i][y]){
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

//Algo tri pour std::deque
std::deque<int> mergeDeque(std::deque<int> list1, std::deque<int> list2){
    size_t i1 = 0;
    size_t i2 = 0;
    std::deque<int> listFusion;

    while (i1 < list1.size() && i2 < list2.size()){
        if (list1[i1] <= list2[i2]){
            listFusion.push_back(list1[i1]);
            i1++;            
        }
        else{
            listFusion.push_back(list2[i2]);
            i2++;
        }
    }

    for (size_t i = i1; i < list1.size(); i++)
        listFusion.push_back(list1[i]);
    for (size_t i = i2; i < list2.size(); i++)
        listFusion.push_back(list2[i]);

    return listFusion;
}

std::deque<int>insertDeque(std::deque<int> list){
    for (size_t i = 1; i < list.size(); i++){
        int tmp = list[i];
        size_t j = i ;
        while (j > 0 && list[j - 1] > tmp){
            list[j] = list[j - 1];
            j--;
        }
        list[j] = tmp;
    }
    return list;
}

std::deque<int> mergeInsertSortDeque(std::deque<int> list){
    if (list.size() <= 5)
        return insertDeque(list);
    
    size_t middle = list.size()/2;
    std::deque<int> slice1(list.begin(), list.begin() + middle);
    std::deque<int> slice2(list.begin() + middle, list.end());
    return mergeDeque(mergeInsertSortDeque(slice1), mergeInsertSortDeque(slice2));
}

//Algo tri pour std::vector
std::vector<int> mergeVector(std::vector<int> list1, std::vector<int> list2){
    size_t i1 = 0;
    size_t i2 = 0;
    std::vector<int> listFusion;

    while (i1 < list1.size() && i2 < list2.size()){
        if (list1[i1] <= list2[i2]){
            listFusion.push_back(list1[i1]);
            i1++;            
        }
        else{
            listFusion.push_back(list2[i2]);
            i2++;
        }
    }

    for (size_t i = i1; i < list1.size(); i++)
        listFusion.push_back(list1[i]);
    for (size_t i = i2; i < list2.size(); i++)
        listFusion.push_back(list2[i]);

    return listFusion;
}

std::vector<int>insertVector(std::vector<int> list){
    for (size_t i = 1; i < list.size(); i++){
        int tmp = list[i];
        size_t j = i ;
        while (j > 0 && list[j - 1] > tmp){
            list[j] = list[j - 1];
            j--;
        }
        list[j] = tmp;
    }
    return list;
}

std::vector<int> mergeInsertSortVector(std::vector<int> list){
    if (list.size() <= 5)
        return insertVector(list);
    
    size_t middle = list.size()/2;
    std::vector<int> slice1(list.begin(), list.begin() + middle);
    std::vector<int> slice2(list.begin() + middle, list.end());
    return mergeVector(mergeInsertSortVector(slice1), mergeInsertSortVector(slice2));
}
