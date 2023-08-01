/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 07:13:40 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 07:41:50 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	hp = 100;
	mana = 50;
	ad = 20;
	std::cout << "ScavTrap Default Constructor" << std::endl;
}
ScavTrap::~ScavTrap() {std::cout << "ScavTrap Destructor" << std::endl;};
ScavTrap::ScavTrap(std::string _name)
{
	name = _name;
	hp = 100;
	mana = 50;
	ad = 20;
	std::cout << "ScavTrap Name Constructor" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap &other)
{
	std::cout << "ScavTrap Copy Constructor" << std::endl;
	*this = other;
}
ScavTrap&	ScavTrap::operator=(ScavTrap &other)
{
	std::cout << "ScavTrap = Constructor" << std::endl;
	name = other.getName();
	hp = other.getHP();
	ad = other.getAD();
	mana = other.getMana();
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (hp > 0 && mana > 0)
	{
		mana--;
		std::cout << "ScavTrap " << name << " attacks " << target << " causing " << ad << " damage !" << std::endl;
		std::cout << name << " has " << mana << " mana left." << std::endl;
	}
	else if (!hp)
		std::cout << "ScavTrap " << name << "cant attack, he is dead" << std::endl;
	else if (!mana)
		std::cout << "ScavTrap " << name << "cant attack, he has no mana left" << std::endl;

}

void ScavTrap::guardGate(void) const
{
	if (hp > 0)
		std::cout << "ScavTrap " << name << " is garding the gate" << std::endl;
	else
		std::cout << "ScavTrap " << name << "'s corpse is garding the gate" << std::endl;
}
