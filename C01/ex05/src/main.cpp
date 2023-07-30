/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 03:08:40 by geudes            #+#    #+#             */
/*   Updated: 2023/07/30 00:54:20 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(void)
{
    Harl my_harl;
    
    // my_harl.warning();

    my_harl.complain("pipicacaprout");
    my_harl.complain("debug");

    my_harl.complain("DEBUG");
    my_harl.complain("INFO");
    my_harl.complain("WARNING");
    my_harl.complain("ERROR");
}