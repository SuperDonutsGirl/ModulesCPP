/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:25:37 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/30 14:25:38 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	msg_error(std::string msg){
	std::cout << msg << std::endl;
	return 1;
}

void replace(std::ifstream& file, std::ofstream& rep, std::string s1, std::string s2){
	size_t		i;
	std::string	line;

	while (!file.eof()){
		getline(file, line);
		i = line.find(s1);
		while (i != std::string::npos){
			line.erase(i, s1.length());
			line.insert(i, s2);
			i += s2.length();
			i = line.find(s1, i);
		}
		rep << line;
		if (!file.eof())
			rep << std::endl;
	}
}

int main(int argc, char **argv){
	if (argc != 4 || !argv[2][0] || !argv[3][0])
		return msg_error(BAD_ARG);
	
	std::string s1 = argv[2];
	std::string	s2 = argv[3];
	
	if (access(argv[1], F_OK) != 0)
		return msg_error(O_NOT_FILE);

	std::ifstream	file(argv[1]);

	if (!file)
		return msg_error(O_FILE);

	std::ofstream	rep(std::string(argv[1]) + ".replace");

	if (!rep)
		return msg_error(O_REP_FILE);

	replace(file, rep, s1, s2);

	return 0;
}
