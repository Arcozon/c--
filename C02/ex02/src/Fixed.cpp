/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:24:37 by geudes            #+#    #+#             */
/*   Updated: 2023/07/31 12:45:39 by geudes           ###   ########.fr       */
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

Fixed::Fixed(int const& to_cpy)
{
	std::cout << "Int constructor called" << std::endl;
	value = to_cpy << e;
}

Fixed::Fixed(float const& to_cpy)
{
	std::cout << "Float constructor called" << std::endl;
	value = to_cpy * (1 << e);
}

Fixed& Fixed::operator=(const Fixed&to_cpy)
{
	std::cout << "= operator called" << std::endl;
	value = to_cpy.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}

float	Fixed::toFloat(void) const
{
	return value / (1 << e);
}

int	Fixed::toInt(void) const
{
	return value >> e;
}

int	Fixed::getRawBits(void) const
{
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

bool Fixed::operator>(const Fixed& other) const
{
	return value > other.getRawBits();
}
bool Fixed::operator>=(const Fixed& other) const
{
	return value >= other.getRawBits();
}
bool Fixed::operator<(const Fixed& other) const
{
	return value < other.getRawBits();
}
bool Fixed::operator<=(const Fixed& other) const
{
	return value <= other.getRawBits();
}
bool Fixed::operator==(const Fixed& other) const
{
	return value == other.getRawBits();
}
bool Fixed::operator!=(const Fixed& other) const
{
	return value != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return value + other.getRawBits();
}
Fixed Fixed::operator-(const Fixed& other) const
{
	return value - other.getRawBits();
}
Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(toFloat() / other.toFloat());
}

Fixed& Fixed::operator++(void)
{
	value++;
	return *this;
}
Fixed& Fixed::operator++(void)
{
	Fixed newf(*this);
	value++;
	return newf;
}
Fixed& Fixed::operator++(void)
{
	value--;
	return *this;
}
Fixed& Fixed::operator++(void)
{
	Fixed newf(*this);
	value--;
	return newf;
}
