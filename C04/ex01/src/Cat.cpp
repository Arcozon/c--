/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 06:03:23 by geudes            #+#    #+#             */
/*   Updated: 2023/08/01 09:51:35 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat() {std::cout << "Cat Destructor" << std::endl;};
Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Default Constructor" << std::endl;
}
Cat::Cat(Cat &other)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = other;
}
Cat& Cat::operator=(Cat &other)
{
	std::cout << "Cat = Constructor" << std::endl;
	type = other.getType();
	return *this;
}

void	Cat::makeNoise(void) const
{
	std::cout << "MiiiaaaOwOUwU" << std::endl;
}
