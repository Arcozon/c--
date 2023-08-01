/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:49:00 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 07:44:30 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ScavTrap poppy("Poppy");

	poppy.guardGate();
	poppy.takeDamage(9);
	for(int i = 0; i < 5; i++)
		poppy.attack("Garen");
	for(int i = 0; i < 6; i++)
		poppy.beRepaired(1);
	poppy.takeDamage(1000);
	poppy.guardGate();
	return (0);
}
