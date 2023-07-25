/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:37:19 by geudes            #+#    #+#             */
/*   Updated: 2023/07/25 15:38:10 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->i = 0;
	this->nb_contact = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add(void)
{
	this->my_contacts[i].add();
	this->i++;
	i%=MAX_CONTACT;
	if (nb_contact < MAX_CONTACT)
		nb_contact ++;
}

void	PhoneBook::search(void)
{
	std::cout << "Search" << std::endl;
}


void	PhoneBook::routine(void)
{
	void (PhoneBook::*ftc_ptr[])(void) = {
		&PhoneBook::help,
		&PhoneBook::add,
		&PhoneBook::search,
		&PhoneBook::clear,
		&PhoneBook::exit,
		NULL};
	std::string cmd[] = {
		"HELP",
		"ADD",
		"SEARCH",
		"CLEAR",
		"EXIT"};
	std::string line;\
	int			i;

	help();
	do
	{
		std::cout << "--> ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			std::exit(0);
		for (i = 0; ftc_ptr[i];i++)
			if (line == cmd[i])
				break ;
		if (ftc_ptr[i])
			ftc_ptr[i]();
	}while(line.empty());
}

void	PhoneBook::help(void)
{
	std::cout <<"Usage: [HELP|ADD|SEARCH|CLEAR|EXIT]" << std::endl;
	std::cout << " -HELP: Show this" <<std::endl;
	std::cout << " -ADD: Add a contact" <<std::endl;
	std::cout << " -SEARCH: Show Contacts and search for one" <<std::endl;
	std::cout << " -CLEAR: Clear screen" <<std::endl;
	std::cout << " -EXIT: exit" <<std::endl;
}

void PhoneBook::clear(void)
{
	std::cout << std::string("\xb1[H\xb1[2J\xb1[3J");
}

void PhoneBook::exit(void)
{
	std::exit(0);
}
