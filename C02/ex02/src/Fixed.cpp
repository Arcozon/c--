/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:24:37 by geudes            #+#    #+#             */
/*   Updated: 2023/07/31 15:56:56 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0){}
Fixed::~Fixed() {}

Fixed::Fixed(Fixed const& to_cpy)
{
	value = to_cpy.getRawBits();
}

Fixed::Fixed(int const& to_cpy)
{
	value = to_cpy << e;
}

Fixed::Fixed(float const& to_cpy)
{
	value = roundf(to_cpy * float(1 << e));
}

Fixed& Fixed::operator=(const Fixed&to_cpy)
{
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
	return float(value) / (1 << e);
}

int	Fixed::toInt(void) const
{
	return value >> e;
}

int	Fixed::getRawBits(void) const
{
	return value;
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
	return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed tmp;
	tmp.setRawBits(value - other.getRawBits());
	return tmp;
}
Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed& other) const
{
	if (other != Fixed(0))
		return Fixed(toFloat() / other.toFloat());
	return *this;
}

Fixed Fixed::operator++(void)
{
	value ++;
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed newf(*this);
	value++;
	return newf;
}
Fixed Fixed::operator--(void)
{
	value--;
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed newf(*this);
	value--;
	return newf;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return a > b ? a : b;
}
Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return a < b ? a : b;
}
const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return a.getRawBits() > b.getRawBits() ? a : b;
}
const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return a.getRawBits() < b.getRawBits() ? a : b;
}
