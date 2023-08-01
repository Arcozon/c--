/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:49:00 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 07:07:06 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap bob("Bob");

	bob.takeDamage(9);
	for(int i = 0; i < 5; i++)
		bob.attack("Darius");
	for(int i = 0; i < 6; i++)
		bob.beRepaired(1);
	bob.takeDamage(10);
	return (0);
}
