/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:36:09 by geudes            #+#    #+#             */
/*   Updated: 2023/07/25 22:44:17 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <sstream>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string number;
		std::string dark_secret;
	public:
		Contact();
		Contact(std::string f, std::string l, std::string n, std::string num, std::string secret);
		Contact(const Contact &tocpy);
		Contact& operator=(const Contact& tocpy);
		~Contact();

		std::string you_ll_fit(std::string str) const;
		std::string display_search(int index) const;

		bool	add(void);

		bool	s_f_name(void);
		bool	s_l_name(void);
		bool	s_n_name(void);
		bool	s_number(void);
		bool	s_dark_secret(void);

		std::string	g_f_name(void) const;
		std::string	g_l_name(void) const;
		std::string	g_n_name(void) const;
		std::string	g_number(void) const;
		std::string	g_dark_secret(void) const;
};

std::ostream& operator<<(std::ostream &os, const Contact &obj);


#endif
