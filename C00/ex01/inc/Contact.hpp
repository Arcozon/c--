/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:36:09 by geudes            #+#    #+#             */
/*   Updated: 2023/07/25 13:34:36 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>

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
		~Contact();

		std::string g_f_name(void);
		std::string g_l_name(void);
		std::string g_n_name(void);
		std::string g_number(void);

		void	add(void);

		void	s_f_name(void);
		void	s_l_name(void);
		void	s_n_name(void);
		void	s_number(void);
		void	s_dark_secret(void);

		int		g_nb_space(std::string str);
};

#endif
