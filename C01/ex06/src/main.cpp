/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 03:08:40 by geudes            #+#    #+#             */
/*   Updated: 2023/07/31 08:58:51 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void endl(void)
{
	std::cout << std::endl;
}

int main(int ac, char **av)
{
	Harl my_harl;

	// my_harl.warning();
	if (ac == 1)
	{
		my_harl.complain("pipicacaprout");
		endl();
		my_harl.complain("debug");
		endl();
		my_harl.complain("DEBUG");
		endl();
		my_harl.complain("INFO");
		endl();
		my_harl.complain("WARNING");
		endl();
		my_harl.complain("ERROR");
	}
	else
		for (int i = 1; i < ac; i++)
			(my_harl.complain(av[i]), endl());

}
