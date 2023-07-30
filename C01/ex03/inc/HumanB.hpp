/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:38:10 by geudes            #+#    #+#             */
/*   Updated: 2023/07/29 23:14:36 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon* my_weapon;
        std::string my_name;
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();

        void setWeapon(Weapon& weapon);
        void attack(void);
};

#endif