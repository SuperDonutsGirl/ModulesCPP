/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamartin <pamartin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:34:19 by pamartin          #+#    #+#             */
/*   Updated: 2023/08/30 16:34:21 by pamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl Harl;

    std::cout << "\n[coucou]" << std::endl;
    Harl.complain("coucou");

    std::cout << "\n[DEBUG]" << std::endl;
    Harl.complain("DEBUG");
    
    std::cout << "\n[INFO]" << std::endl;
    Harl.complain("INFO");

    std::cout << "\n[WARNING]" << std::endl;
    Harl.complain("WARNING");

    std::cout << "\n[ERROR]" << std::endl;
    Harl.complain("ERROR");

    std::cout << "\n[LOOOOL]" << std::endl;
    Harl.complain("LOOOOL");

    return 0;
}
