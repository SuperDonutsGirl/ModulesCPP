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
    deque = mergeInsertSortDeque(deque);
    double time = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC * 1000;


    std::cout << "\nAfter : ";
    for (size_t i = 0; i < deque.size(); i++)
        std::cout << deque[i] << " ";
    
    std::cout << "\nTime to process a range of " << deque.size() << " elements with std::deque : " << time << " us";

    start = clock();
    vector = mergeInsertSortVector(vector);
    time = static_cast<double>(std::clock() - start) / CLOCKS_PER_SEC * 1000;
    std::cout << "\nTime to process a range of " << vector.size() << " elements with std::vector : " << time << " us";

    return 0;
}
