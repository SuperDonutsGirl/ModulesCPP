/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:00:52 by pamartin          #+#    #+#             */
/*   Updated: 2023/03/01 13:00:55 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack<T> &inst);
        MutantStack<T> &operator=(const MutantStack<T> &inst);
        ~MutantStack();

        typedef typename MutantStack::stack::container_type::iterator iterator;

        iterator	begin(){
			return this->c.begin();
		}

        iterator	end(){
			return this->c.end();
		}
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &inst) : std::stack<T>(inst){
}

template <typename T>
MutantStack<T>::~MutantStack(){
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &inst){
	std::stack<T>::operator=(inst);
	return *this;
}


#endif
