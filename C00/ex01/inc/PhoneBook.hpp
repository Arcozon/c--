/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:37:29 by geudes            #+#    #+#             */
/*   Updated: 2023/07/25 15:02:55 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

#define MAX_CONTACT 8
class PhoneBook
{
	private:
		Contact my_contacts[MAX_CONTACT];
		int		i;
		int		nb_contact;
	public:
		PhoneBook();
		~PhoneBook();

		void	add(void);
		void	search(void);
		void	help(void);
		void	exit(void);
		void	clear(void);

		void	routine(void);
};

#endif
