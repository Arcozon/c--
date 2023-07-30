/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 03:08:40 by geudes            #+#    #+#             */
/*   Updated: 2023/07/28 03:37:53 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    Zombie stackZombie("Stack");
    Zombie *heapZombie = newZombie("Heap");

    randomChump("Random");
    stackZombie.annonce();
    heapZombie->annonce();

    delete heapZombie;
}