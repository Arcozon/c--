/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 05:59:28 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 07:19:56 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		int			hp;
		int			mana;
		int			ad;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(ClapTrap &other);
		ClapTrap& operator=(ClapTrap &other);

		std::string	getName(void) const;
		int	getHP(void) const;
		int	getAD(void) const;
		int	getMana(void) const;

		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
