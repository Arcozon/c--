/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 07:13:40 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 07:56:42 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	hp = 100;
	mana = 100;
	ad = 30;
	std::cout << "FragTrap Default Constructor" << std::endl;
}
FragTrap::~FragTrap() {std::cout << "FragTrap Destructor" << std::endl;};
FragTrap::FragTrap(std::string _name)
{
	name = _name;
	hp = 100;
	mana = 100;
	ad = 30;
	std::cout << "FragTrap Name Constructor" << std::endl;
}
FragTrap::FragTrap(FragTrap &other)
{
	std::cout << "FragTrap Copy Constructor" << std::endl;
	*this = other;
}
FragTrap&	FragTrap::operator=(FragTrap &other)
{
	std::cout << "FragTrap = Constructor" << std::endl;
	name = other.getName();
	hp = other.getHP();
	ad = other.getAD();
	mana = other.getMana();
	return *this;
}

void FragTrap::highFivesGuys(void) const
{
	if (hp > 0)
		std::cout << "FragTrap " << name << " ask for a high five !!" << std::endl;
	else
		std::cout << "FragTrap " << name << "'s corpse ask for a high five !!" << std::endl;
}
