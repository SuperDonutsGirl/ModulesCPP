/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:54:31 by pamartin          #+#    #+#             */
/*   Updated: 2023/01/09 13:54:33 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string low_to_up(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int 	main(int argc, char **argv)
{
	int	i;

	i = 1;
    if (argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	for (int i = 1; argv[i]; i++){
		std::cout << low_to_up(argv[i]);
		std::cout << " ";
	}
	std::cout << "\n";

    return 0;
}
