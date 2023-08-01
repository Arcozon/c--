/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:03:23 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 15:08:08 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal"){ std::cout << "Animal Default Constructor" << std::endl;}
Animal::~Animal() {std::cout << "Animal Destructor" << std::endl;};
Animal::Animal(std::string _type): type(_type)
{
	std::cout << "Animal Name Constructor" << std::endl;
}
Animal::Animal(Animal &other)
{
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = other;
}
Animal& Animal::operator=(Animal &other)
{
	std::cout << "Animal = Constructor" << std::endl;
	type = other.getType();
	return *this;
}

std::string Animal::getType(void) const
{
	return type;
}
void	Animal::makeNoise(void) const
{
	std::cout << "Grrr Grrr Cuii cuiii" << std::endl;
}
