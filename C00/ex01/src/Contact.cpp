/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:37:26 by geudes            #+#    #+#             */
/*   Updated: 2023/07/25 13:45:58 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::g_f_name(void)
{
	return this->f_name;
}

std::string Contact::g_l_name(void)
{
	return this->l_name;
}

std::string Contact::g_n_name(void)
{
	return this->n_name;
}

std::string Contact::g_number(void)
{
	return this->number;
}

void	Contact::add(void)
{
	s_f_name();
	s_l_name();
	s_n_name();
	s_number();
	s_dark_secret();
}

void	Contact::s_f_name(void)
{
	do
	{
		std::cout << "Enter your first name: ";
		std::getline(std::cin, f_name);
		if (std::cin.eof())
			std::exit(0);
	}while(f_name.empty());
}
void	Contact::s_l_name(void)
{
	do
	{
		std::cout << "Enter your last name: ";
		std::getline(std::cin, l_name);
		if (std::cin.eof())
			std::exit(0);
	}while(l_name.empty());
}
void	Contact::s_n_name(void)
{
	do
	{
		std::cout << "Enter your nickname: ";
		std::getline(std::cin, n_name);
		if (std::cin.eof())
			std::exit(0);
	}while(n_name.empty());
}

static bool is_number(std::string str)
{
	for (int i = 0; str[i]; ++i)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}
void	Contact::s_number(void)
{
	do
	{
		std::cout << "Enter your number: ";
		std::getline(std::cin, number);
		if (std::cin.eof())
			std::exit(0);
		if (!is_number(number))
			std::cout << "Please enter a valid number" <<std::endl;
	}while(number.empty() || !is_number(number));
}
void	Contact::s_dark_secret(void)
{
	do
	{
		std::cout << "Tell me your darkest secret: ";
		std::getline(std::cin, dark_secret);
		if (std::cin.eof())
			std::exit(0);
	}while(dark_secret.empty());
}
