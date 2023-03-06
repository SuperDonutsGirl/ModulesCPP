/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 12:57:29 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/28 12:57:30 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//For compil
// c++ -std=c++98 -Wall -Werror -Wextra main.cpp


#include "easyfind.hpp"

int main(){
	std::list<int>		li;
	std::vector<int>	vec;
	std::set<int>		set;

	for (int i = 0; i < 5; i++){
		li.push_back(i + 10);
		vec.push_back(i);
		set.insert(i + 2);
	}

	std::cout << "\nPrint every containers and call easyfind for each\n" << std::endl;
	std::cout << "List : ";
	for (std::list<int>::iterator it = li.begin(); it != li.end(); it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	for (int i = 10; i <= 16; i += 2){
		std::cout << "Easyfind " << i << " :";
		try{
			easyfind(li, i);
			std::cout << "yes" << std::endl;
		}
		catch(std::invalid_argument &elemt){
			std::cout << elemt.what() << std::endl;
		}
	}

	std::cout << "\nVector : ";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i <= 6; i ++){
		std::cout << "Easyfind " << i << " :";
		try{
			easyfind(vec , i);
			std::cout << "yes" << std::endl;
		}
		catch(std::invalid_argument &elemt){
			std::cout << elemt.what() << std::endl;
		}
	}

	std::cout << "\nSet : ";
	for (std::set<int>::iterator it = set.begin(); it != set.end(); it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i <= 6; i += 2){
		std::cout << "Easyfind " << i << " :";
		try{
			easyfind(set , i);
			std::cout << "yes" << std::endl;
		}
		catch(std::invalid_argument &elemt){
			std::cout << elemt.what() << std::endl;
		}
	}
	
	return 0;
}
