/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:24:55 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/28 14:24:56 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(18);


	std::cout << "\n~ Shortest and longest span with a baby list" << std::endl;
	std::cout << "shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "longest: " << sp.longestSpan() << std::endl;

	std::vector<int> vector;
	Span spBig(19000);
	srand(time(0));
	for (int i = 0; i < 19000; i++){
		vector.push_back(rand() % 42);
	}
	spBig.addNumber(vector);
	std::cout << "\n~ Shortest and longest span with a big list" << std::endl;
	std::cout << "shortest: " << spBig.shortestSpan() << std::endl;
	std::cout << "longest: " << spBig.longestSpan() << std::endl;

	return 0;
}

