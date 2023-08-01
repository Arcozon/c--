/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:03:23 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 15:29:19 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal"){ std::cout << "WrongAnimal Default Constructor" << std::endl;}
WrongAnimal::~WrongAnimal() {std::cout << "WrongAnimal Destructor" << std::endl;};
WrongAnimal::WrongAnimal(std::string _type): type(_type)
{
	std::cout << "WrongAnimal Name Constructor" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	*this = other;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal &other)
{
	std::cout << "WrongAnimal = Constructor" << std::endl;
	type = other.getType();
	return *this;
}

std::string WrongAnimal::getType(void) const
{
	return type;
}
void	WrongAnimal::makeNoise(void) const
{
	std::cout << "Wrong animal noise" << std::endl;
}
