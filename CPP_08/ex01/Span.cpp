/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:25:46 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/28 14:25:48 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* ************************************ */
/*          CANONICAL FORM              */
/* ************************************ */
Span::Span(){
}

Span::Span(unsigned int N) : N(N){
}

Span::Span(const Span &inst) : _numbers(inst._numbers), N(inst.N){
}

Span::~Span(){
}


/* ************************************ */
/*               OPERATORS              */
/* ************************************ */
Span& Span::operator=(const Span& inst) {
    if (this != &inst) {
		_numbers.erase(_numbers.begin(), _numbers.end());
        _numbers = inst._numbers;
        N = inst.N;
    }
    return *this;
}


/* ************************************ */
/*               METHOD                 */
/* ************************************ */
void	Span::addNumber(int nb){
	try{
		if (_numbers.size() >= N)
			throw std::out_of_range(" was not add to span because span is already full");
		_numbers.push_back(nb);
		std::cout << nb << " was add to Span" << std::endl;
	}
	catch(std::out_of_range &over){
		std::cout << nb << over.what() << std::endl;
	}
}

void	Span::addNumber(std::vector<int> vector){
	try{
		if (_numbers.size() >= N || _numbers.size() + vector.size() > N)
			throw std::out_of_range("\nSpan does not have enough space");
		_numbers.insert(_numbers.end(), vector.begin(), vector.end());
	}
	catch(std::out_of_range &over){
		std::cout <<  over.what() << std::endl;
	}
}

std::string		Span::shortestSpan(){
	try{
		if (_numbers.size() <= 1)
			throw Span::SpanTooShortException();
		std::vector<int> tmp = _numbers;
		std::sort(tmp.begin(), tmp.end());
		return std::to_string(tmp[1] - tmp[0]);
	}
	catch(Span::SpanTooShortException &arg){
		std::cout <<  arg.what();
		return "";
	}
}

std::string		Span::longestSpan(){
	try{
		if (_numbers.size() <= 1)
			throw Span::SpanTooShortException();
		std::vector<int> tmp = _numbers;
		std::sort(tmp.begin(), tmp.end());
		return (std::to_string(tmp.back() - tmp.front()));
	}
	catch(Span::SpanTooShortException &arg){
		std::cout <<  arg.what();
		return "";
	}
}


/* ************************************ */
/*            EXCEPTION                 */
/* ************************************ */
const char	*Span::SpanTooShortException::what() const throw(){
	return ("There is no span to find anything");
}