/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:03:23 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 09:51:35 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Default Constructor" << std::endl;
}
Dog::~Dog() {std::cout << "Dog Destructor" << std::endl;};
Dog::Dog(Dog &other)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = other;
}
Dog& Dog::operator=(Dog &other)
{
	std::cout << "Dog = Constructor" << std::endl;
	type = other.getType();
	return *this;
}
