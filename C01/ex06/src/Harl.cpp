/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 00:40:05 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 14:55:15 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "Debug" << std::endl;
	this->info();
}
void Harl::info(void)
{
	std::cout << "Info" << std::endl;
	this->warning();
}
void Harl::warning(void)
{
	std::cout << "Warning" << std::endl;
	this->error();
}
void Harl::error(void)
{
	std::cout << "Error" << std::endl;
}

void Harl::complain(std::string level)
{
	int	i;

	std::string tab_str[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
		"END"
	};
	for (i = 0;tab_str[i] != "END"; i++)
		if (tab_str[i] == level)
			break ;
	switch(i)
	{
		case 0:
			this->debug(); break;
		case 1:
			this->info(); break;
		case 2:
			this->warning(); break;
		case 3:
			this->error(); break;
		default:
			std::cout << "Gngnngngng i complain a lot" << std::endl;
			break;
	}

}
