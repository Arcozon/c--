/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:49:00 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 07:56:05 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	FragTrap wawick("wawick");

	wawick.highFivesGuys();
	wawick.takeDamage(9);
	for(int i = 0; i < 5; i++)
		wawick.attack("Sion");
	for(int i = 0; i < 6; i++)
		wawick.beRepaired(1);
	wawick.takeDamage(1000);
	wawick.highFivesGuys();
	return (0);
}
