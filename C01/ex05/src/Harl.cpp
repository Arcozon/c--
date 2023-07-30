/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 00:40:05 by geudes            #+#    #+#             */
/*   Updated: 2023/07/30 00:59:36 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){std::cout << "Debug" << std::endl;}
void Harl::info(void){std::cout << "Info" << std::endl;}
void Harl::warning(void){std::cout << "Warning" << std::endl;}
void Harl::error(void){std::cout << "Error" << std::endl;}

void Harl::complain(std::string level)
{
    void (Harl::*tab_fc[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error,
        NULL
    };
    std::string tab_str[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    for (int i = 0;tab_fc[i]; i++)
    {
        if (tab_str[i] == level)
        {
            (this->*tab_fc[i])();
            break ;
        }
    }
}