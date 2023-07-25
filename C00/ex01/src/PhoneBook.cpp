/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:37:19 by geudes            #+#    #+#             */
/*   Updated: 2023/07/25 23:07:56 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	eof = false;
	i = 0;
	nb_contact = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add(void)
{
	eof = my_contacts[i].add();
	i++;
	i%=MAX_CONTACT;
	if (nb_contact < MAX_CONTACT)
		nb_contact ++;
}

void	PhoneBook::full(void)
{
	Contact contacts[] = {
		Contact("Bob", "L'eponge", "goldencube", "0123456789", "am a certified heroinoman"),
		Contact("Noah", "riviere", "Gudah", "never call me", "am addicted to league"),
		Contact("Gabriel", "eudes", "Arcozon", "2147483647", "am also addicted to league")
	};

	std::srand(static_cast<unsigned>(std::time(0)));
	while (nb_contact < MAX_CONTACT)
	{
		this->my_contacts[i] = contacts[std::rand() % 3];
		this->i++;
		i%=MAX_CONTACT;
		nb_contact ++;
	}
}

void	PhoneBook::search(void)
{
	std::string line;
	int	choice = -1;
	clear();
	std::cout << "|Index|First name| Last name| Nick name|" << std::endl;
	for (int i = 0; i < nb_contact; i++)
		std::cout << my_contacts[i].display_search(i + 1) << std::endl;
	if (nb_contact == 0)
	{
		std::cout << "No friend yet :(" << std::endl;
		return ;
	}
	do
	{
		std::cout << std::endl << "Select an index: ";
		std::getline(std::cin, line);
		if (std::cin.eof())
		{
			eof = true;
			return;
		}
		std::istringstream(line) >> choice ;
		if (choice < 1 || choice > nb_contact)
			std::cout << "Please enter an integer between 1 - " << nb_contact;
	}while (choice < 1 || choice > nb_contact);
	std::cout << my_contacts[choice - 1] << std::endl;
	
}


void	PhoneBook::routine(void)
{
	void (PhoneBook::*ftc_ptr[])(void) = {
		&PhoneBook::help,
		&PhoneBook::add,
		&PhoneBook::full,
		&PhoneBook::search,
		&PhoneBook::clear,
		NULL};
	std::string cmd[] = {
		"HELP",
		"ADD",
		"FULL",
		"SEARCH",
		"CLEAR",
		};
	std::string line;\
	int			i;

	help();
	do
	{
		std::cout << "--> ";
		std::getline(std::cin, line);
		if (std::cin.eof())
		{
			eof = true;
			return ;
		}
		for (i = 0; ftc_ptr[i];i++)
			if (line == cmd[i])
				break ;
		if (ftc_ptr[i])
			(this->*ftc_ptr[i])();
	}	while (line != "EXIT" && !eof);
}

void	PhoneBook::help(void)
{
	std::cout <<"Usage: [HELP|ADD|SEARCH|CLEAR|EXIT]" << std::endl;
	std::cout << " -HELP: Show this" <<std::endl;
	std::cout << " -ADD: Add a contact" <<std::endl;
	std::cout << " -FULL: Get 8 friends" <<std::endl;
	std::cout << " -SEARCH: Show Contacts and search for one" <<std::endl;
	std::cout << " -CLEAR: Clear screen" <<std::endl;
	std::cout << " -EXIT: exit" <<std::endl;
}

void PhoneBook::clear(void)
{
	std::cout << "\x1B[H\x1B[2J\x1B[3J";
}

void PhoneBook::d_eof(void)
{
	if (eof)
		std::cout << "You silly eof" << std::endl;
}
