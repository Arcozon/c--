/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:37:26 by geudes            #+#    #+#             */
/*   Updated: 2023/07/25 23:06:41 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact& Contact::operator=(const Contact& tocpy)
{
	f_name = tocpy.g_f_name();
	l_name = tocpy.g_l_name();
	n_name = tocpy.g_n_name();
	number = tocpy.g_number();
	dark_secret = tocpy.g_dark_secret();
	return *this;
}
Contact::Contact(std::string f, std::string l, std::string n, std::string num, std::string secret)
{
	f_name = f;
	l_name = l;
	n_name = n;
	number = num;
	dark_secret = secret;
}

Contact::~Contact() {}

std::string Contact::you_ll_fit(std::string str) const
{
	uint	len = str.length();
	str.resize(len > 10 ? 9 : len);
	if (len > 10)
		str += '.';
	return str;
}

std::string Contact::display_search(int index) const
{
	std::ostringstream my_stream;
	my_stream << "|  " << index << "  |";
	my_stream << std::setw(10) << std::setfill(' ');
	my_stream << you_ll_fit(f_name) << '|';
	my_stream << std::setw(10) << std::setfill(' ');
	my_stream << you_ll_fit(l_name) << '|';
	my_stream << std::setw(10) << std::setfill(' ');
	my_stream << you_ll_fit(n_name) << '|';
	return my_stream.str();
}

bool	Contact::add(void)
{
	bool res = false; 
	res |= s_f_name();
	if (!res)
		res |= s_l_name();
	if (!res)
		res |= s_n_name();
	if (!res)
		res |= s_number();
	if (!res)
		res |= s_dark_secret();
	return res;
}

bool	Contact::s_f_name(void)
{
	do
	{
		std::cout << "Enter your first name: ";
		std::getline(std::cin, f_name);
		if (std::cin.eof())
			return true;
	}while(f_name.empty());
	return (false);
}
bool	Contact::s_l_name(void)
{
	do
	{
		std::cout << "Enter your last name: ";
		std::getline(std::cin, l_name);
		if (std::cin.eof())
			return true;
	}while(l_name.empty());
	return false;
}
bool	Contact::s_n_name(void)
{
	do
	{
		std::cout << "Enter your nickname: ";
		std::getline(std::cin, n_name);
		if (std::cin.eof())
			return true;
	}while(n_name.empty());
	return false;
}

static bool is_number(std::string str)
{
	for (int i = 0; str[i]; ++i)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}
bool	Contact::s_number(void)
{
	do
	{
		std::cout << "Enter your number: ";
		std::getline(std::cin, number);
		if (std::cin.eof())
			return true;
		if (!is_number(number))
			std::cout << "Please enter a valid number" <<std::endl;
	}while(number.empty() || !is_number(number));
	return false;
}
bool	Contact::s_dark_secret(void)
{
	do
	{
		std::cout << "Tell me your darkest secret: ";
		std::getline(std::cin, dark_secret);
		if (std::cin.eof())
			return true;
	}while(dark_secret.empty());
	return false;
}

std::string	Contact::g_f_name(void) const {return f_name;}
std::string	Contact::g_l_name(void) const {return l_name;}
std::string	Contact::g_n_name(void) const {return n_name;}
std::string	Contact::g_number(void) const{return number;}
std::string	Contact::g_dark_secret(void) const {return dark_secret;}

std::ostream& operator<<(std::ostream& os, const Contact& obj)
{
	os << "My name is " << obj.g_f_name() << " " << obj.g_l_name() << ". ";
	os << "You can also call me " << obj.g_n_name() << ". ";
	os << "Call me at " << obj.g_number() << ". ";
	os << "I really hope you dont know i " << obj.g_dark_secret() << " for a living.";
	os << std::endl;
	return os;
	os << "First name: " << obj.g_f_name() << std::endl;
	os << "Last name: " << obj.g_l_name() << std::endl;
	os << "Nick name: " << obj.g_f_name() << std::endl;
	os << "Number: " << obj.g_f_name() << std::endl;
	os << "Darkest secret: " << obj.g_dark_secret() << std ::endl;
	return os;
}