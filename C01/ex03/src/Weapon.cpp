/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:42:38 by geudes            #+#    #+#             */
/*   Updated: 2023/07/29 22:46:57 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}
Weapon::Weapon(std::string new_w_name) {w_name = new_w_name;}
Weapon::~Weapon() {}

void Weapon::setType(std::string new_w_name)
{
    w_name = new_w_name;
}

std::string& Weapon::getType(void)
{
    return w_name;
}