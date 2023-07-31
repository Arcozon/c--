/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 03:08:37 by geudes            #+#    #+#             */
/*   Updated: 2023/07/31 13:01:46 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string _name);
        ~Zombie();

        void annonce(void);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
