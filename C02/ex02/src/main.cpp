/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:39:24 by geudes            #+#    #+#             */
/*   Updated: 2023/07/31 20:03:09 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const c( Fixed(10.5f) / Fixed(2.1f) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << Fixed::max( a, c ) << std::endl;
	std::cout << (Fixed(2) == Fixed(2.0f) ? "True" : "False") << std::endl;
	std::cout << (Fixed(2) < Fixed(2.1f) ? "True" : "False") << std::endl;
	std::cout << Fixed(3) * Fixed(3.3333f) << std::endl;
	return (0);
}
