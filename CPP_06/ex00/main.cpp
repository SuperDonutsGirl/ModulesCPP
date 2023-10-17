/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:07:13 by pamartin          #+#    #+#             */
/*   Updated: 2023/02/22 18:07:15 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvertor.hpp"

int main(int argc, char **argv){

	if (argc != 2){
		std::cout << "Bad Arg : Please enter only one argument" << std::endl;
		return 1;
	}

	std::string 	element = argv[1];
	ScalarConvertor convertor;

	convertor.convert(element);

	return 0;
}

