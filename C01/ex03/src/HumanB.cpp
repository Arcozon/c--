/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:54:43 by geudes            #+#    #+#             */
/*   Updated: 2023/07/29 23:18:19 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}
HumanB::HumanB(std::string name)
{
    my_name = name;
    my_weapon = 0;
}
HumanB::~HumanB() {}


void HumanB::attack(void)
{
    if (my_weapon)
        std::cout << my_name << " attacks with " << my_weapon->getType() << std::endl;
    else
        std::cout << my_name << " is bare handed" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    my_weapon = &weapon;
}