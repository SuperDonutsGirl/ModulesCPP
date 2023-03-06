/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:32:25 by pamartin          #+#    #+#             */
/*   Updated: 2023/03/01 12:32:29 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// push() : ajoute un element a la fin
// 	avec les list : push_back();

// top() : dernier element
// 	avec les list : back()

// pop() : suppression du dernier element
// 	avec les list : pop_back()

// size() : donne la taille 

// begin() : iterateur du premier élément (uniquement pour les list)

// end() : iterateur du dernier élément (uniquement pour les list)


// v: [ 1 | 2 | 3 | 4 | ... | 999 ]
//      🡑                      🡑     🡑
//    front()                back() end()
//      🡑
//    begin()

#include "MutantStack.hpp"
// #include <list>

int main(){
	// std::list<int>		li;
	MutantStack<int>	mstack;

	// //list
	// li.push_back(5);
	// li.push_back(17);
	//MutantStack
	mstack.push(5);
	mstack.push(17);

	// //list
	// std::cout << "list  : ";
	// std::cout << li.back() << std::endl;
	//MutantStack
	std::cout << "stack : ";
	std::cout << mstack.top() << std::endl;

	// //list
	// li.pop_back();
	//MutantStack
	mstack.pop();

	// //list
	// std::cout << "\nlist  : ";
	// std::cout << li.size();
	// //MutantStack
	std::cout << "\nstack : ";
	std::cout << mstack.size() << std::endl << std::endl;

	// //list
	// li.push_back(3);
	// li.push_back(737);
	// li.push_back(0);
	//MutantStack
	mstack.push(3);
	mstack.push(737);
	mstack.push(0);

	// //list
	// std::list<int>::iterator itli = li.begin();
	// std::list<int>::iterator iteli = li.end();

	// ++itli;
	// --itli;
	// while (itli != iteli){
	// 	std::cout << "list : ";
	// 	std::cout << *itli << std::endl;
	// 	++itli;
	// }

	//MutantStack
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite){
		std::cout << "stack : ";
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	return 0;
}
