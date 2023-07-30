/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:54:43 by geudes            #+#    #+#             */
/*   Updated: 2023/07/29 23:16:36 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): my_weapon(weapon), my_name(name) {}
HumanA::~HumanA() {}

void HumanA::attack(void)
{
    std::cout << my_name << " attacks with " << my_weapon.getType() << std::endl;
}