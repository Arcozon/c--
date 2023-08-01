/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 08:11:26 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 08:26:38 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	hp = 100;
	mana = 50;
	ad = 20;
	std::cout << "DiamondTrap Default Constructor" << std::endl;
}
DiamondTrap::~DiamondTrap() {std::cout << "DiamondTrap Destructor" << std::endl;};
DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name)
{
	name = _name;
	clap_name = ClapTrap::name;
	hp = FragTrap::hp;
	mana = ScavTrap::mana;
	ad = FragTrap::ad;
	std::cout << "DiamondTrap Name Constructor" << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap &other)
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
	*this = other;
}
DiamondTrap&	DiamondTrap::operator=(DiamondTrap &other)
{
	std::cout << "DiamondTrap = Constructor" << std::endl;
	name = other.getName();
	hp = other.getHP();
	ad = other.getAD();
	mana = other.getMana();
	return *this;
}

void DiamondTrap::WhoAmI(void) const
{
	std::cout << "Diamond name: " << name << " |ClapTrap name: " << clap_name << std::endl;
}
