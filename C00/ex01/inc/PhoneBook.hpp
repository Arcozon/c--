/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:37:29 by geudes            #+#    #+#             */
/*   Updated: 2023/07/25 23:04:17 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <cstdlib>
#include <ctime>

#define MAX_CONTACT 8
class PhoneBook
{
	private:
		Contact my_contacts[MAX_CONTACT];
		int		i;
		int		nb_contact;
		bool	eof;
	public:
		PhoneBook();
		~PhoneBook();

		void	help(void);
		void	add(void);
		void	full(void);
		void	search(void);
		void	clear(void);
		void	exit(void);

		void	routine(void);
		void	d_eof(void);
};

#endif
