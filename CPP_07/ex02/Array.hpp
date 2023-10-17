/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:10:36 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/28 10:10:39 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array &inst);
        ~Array();

        T &operator[](unsigned int id);
        Array &operator=(Array &inst);

        unsigned int size();
};


/* ************************************ */
/*          CANONICAL FORM              */
/* ************************************ */

template <class T>
Array<T>::Array() : _array(NULL), _size(0){
}

template <class T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n){
}

template <class T>
Array<T>::Array(Array &inst) : _size(inst.size()){
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = inst._array[i];
}

template <class T>
Array<T>::~Array(){
    delete[] _array;
}




/* ************************************ */
/*               OPERATORS              */
/* ************************************ */
template <class T>
T &Array<T>::operator[](unsigned int id){
    if (id < 0 || id >= _size)
        throw std::out_of_range("Index is out of the limits");
    return _array[id];
}

template <class T>
Array<T>    &Array<T>::operator=(Array &inst){
    if (_size > 0)
        delete[] _array;
    _size = inst.size();
    _array = new T[_size];
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = inst._array[i];
    return *this;
}

template <class T>
std::ostream &operator<<(std::ostream &os, Array<T> &array){
    os << "{ ";
    for (unsigned int i = 0; i < array.size(); i++){
        os << array[i];
        if (i < array.size() - 1)
            os << ", ";
    }
    os << " }";
    return os;
}

/* ************************************ */
/*               METHOD                 */
/* ************************************ */
template <class T>
unsigned int Array<T>::size(){
    return _size;
}

#endif

