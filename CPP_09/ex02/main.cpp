/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:34:04 by pamartin          #+#    #+#             */
/*   Updated: 2023/11/07 12:34:05 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::deque<int> fusionDeque(std::deque<int> list1, std::deque<int> list2){
    size_t i1 = 0;
    size_t i2 = 0;
    std::deque<int> listFusion;

    while (i1 != list1.size() && i2 != list2.size()){
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

std::deque<int> mergeSortDeque(std::deque<int> list){
    if (list.size() <= 1)
        return list;
    
    size_t middle = list.size()/2;
    std::deque<int> slice1(list.begin(), list.begin() + middle);
    std::deque<int> slice2(list.begin() + middle, list.end());
    return fusionDeque(mergeSortDeque(slice1), mergeSortDeque(slice2));
}

std::vector<int> fusionVector(std::vector<int> list1, std::vector<int> list2){
    size_t i1 = 0;
    size_t i2 = 0;
    std::vector<int> listFusion;

    while (i1 != list1.size() && i2 != list2.size()){
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

std::vector<int> mergeSortVector(std::vector<int> list){
    if (list.size() <= 1)
        return list;
    
    size_t middle = list.size()/2;
    std::vector<int> slice1(list.begin(), list.begin() + middle);
    std::vector<int> slice2(list.begin() + middle, list.end());
    return fusionVector(mergeSortVector(slice1), mergeSortVector(slice2));
}

int main(int argc, char **argv){
    if (argc < 2 ){
        std::cout << "Error" << std::endl;
        return 1;
    }

    std::deque<int> deque;
    std::vector<int> vector;
    if (!fillContainer(argv, deque, vector)){
        return 1;
    }

    std::cout << "Before : ";
    for (size_t i = 0; i < vector.size(); i++)
        std::cout << vector[i] << " ";

    clock_t start = clock();
    deque = mergeSortDeque(deque);
    double time = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC * 1000000;


    std::cout << "\nAfter d: ";
    for (size_t i = 0; i < deque.size(); i++)
        std::cout << deque[i] << " ";
    
    std::cout << "\nTime to process a range of " << deque.size() << " elements with std::deque : " << time << " us";

    start = clock();
    vector = mergeSortVector(vector);
    time = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC * 1000000;
    std::cout << "\nTime to process a range of " << vector.size() << " elements with std::vector : " << time << " us";

    return 0;
}
