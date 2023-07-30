/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 22:39:09 by geudes            #+#    #+#             */
/*   Updated: 2023/07/29 22:46:28 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string w_name;
    public:
        Weapon();
        Weapon(std::string new_w_name);
        ~Weapon();

        std::string&    getType(void);
        void            setType(std::string new_w_name);
};

#endif