/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongngCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:03:23 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 15:26:43 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat() {std::cout << "WrongCat Destructor" << std::endl;};
WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor" << std::endl;
}
WrongCat::WrongCat(WrongCat &other)
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
	*this = other;
}
WrongCat& WrongCat::operator=(WrongCat &other)
{
	std::cout << "WrongCat = Constructor" << std::endl;
	type = other.getType();
	return *this;
}

void	WrongCat::makeNoise(void) const
{
	std::cout << "Wrong Wrongcat noise" << std::endl;
}
