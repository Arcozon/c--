/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:49:00 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 08:29:55 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	DiamondTrap trundle("trundle");

	trundle.highFivesGuys();
	trundle.guardGate();
	trundle.WhoAmI();
	trundle.takeDamage(9);
	trundle.attack("Neeko");
	trundle.beRepaired(1);
	trundle.takeDamage(1000);
	trundle.highFivesGuys();
	trundle.guardGate();
	trundle.WhoAmI();
	return (0);
}
