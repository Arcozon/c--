/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:03:23 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 07:26:39 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): hp(10), mana(10), ad(0) { std::cout << "ClapTrap Default Constructor" << std::endl;}
ClapTrap::~ClapTrap() {std::cout << "ClapTrap Destructor" << std::endl;};
ClapTrap::ClapTrap(std::string _name):  name(_name), hp(10), mana(10), ad(0) {std::cout << "ClapTrap Name Constructor" << std::endl;}
ClapTrap::ClapTrap(ClapTrap &other)
{
	std::cout << "ClapTrap Copy Constructor" << std::endl;
	*this = other;
}
ClapTrap&	ClapTrap::operator=(ClapTrap &other)
{
	std::cout << "ClapTrap = Constructor" << std::endl;
	name = other.getName();
	hp = other.getHP();
	ad = other.getAD();
	mana = other.getMana();
	return *this;
}

std::string	ClapTrap::getName(void) const {return name;}
int	ClapTrap::getHP(void) const {return hp;}
int	ClapTrap::getAD(void) const {return ad;}
int	ClapTrap::getMana(void) const {return mana;}

void ClapTrap::attack(const std::string& target)
{
	if (hp > 0 && mana > 0)
	{
		mana--;
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " << ad << " damage !" << std::endl;
		std::cout << name << " has " << mana << " mana left." << std::endl;
	}
	else if (!hp)
		std::cout << "ClapTrap " << name << "cant attack, he is dead" << std::endl;
	else if (!mana)
		std::cout << "ClapTrap " << name << "cant attack, he has no mana left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hp > 0)
	{
		amount = (amount > (unsigned int)hp) ? hp : amount;
		hp -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " damage !" << std::endl;
		std::cout << name << " has " << hp << " left." << std::endl;
	}
	if (!hp)
		std::cout << "ClapTrap " << name << " died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hp > 0 && mana > 0)
	{
		hp += amount;
		mana--;
		std::cout << "ClapTrap " << name << " heals for " << amount << " HP !" << std::endl;
		std::cout << name << " has " << hp << " left." << std::endl;
		std::cout << name << " has " << mana << " mana left." << std::endl;
	}
	else if (!hp)
		std::cout << "ClapTrap " << name << " cant heal, he is dead" << std::endl;
	else if (!mana)
		std::cout << "ClapTrap " << name << " cant heal, he has no mana left" << std::endl;
}
