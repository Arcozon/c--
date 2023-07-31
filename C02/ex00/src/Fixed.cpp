/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:24:37 by geudes            #+#    #+#             */
/*   Updated: 2023/07/31 09:59:40 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0){std::cout << "Default constructor called" << std::endl;}
Fixed::~Fixed() {std::cout << "Destructor called" << std::endl;}

Fixed::Fixed(Fixed const& to_cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	value = to_cpy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed&to_cpy)
{
	std::cout << "= operator called" << std::endl;
	value = to_cpy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called" << std::endl;
	value = raw;
}
