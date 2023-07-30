/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 03:08:54 by geudes            #+#    #+#             */
/*   Updated: 2023/07/28 04:06:31 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}
Zombie::~Zombie()
{
    std::cout << name << " died." << std::endl ;
}
Zombie::Zombie(std::string _name) {name = _name;}

void Zombie::set_name(std::string _name)
{
    name = _name;
}

void Zombie::annonce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}