/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:39:24 by geudes            #+#    #+#             */
/*   Updated: 2023/07/31 21:30:30 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

void am_i_in(Point& A, Point& B, Point& C, Point P)
{
	std::cout << "(" << P.getX().toFloat() ;
	std::cout << ", " << P.getY().toFloat() << ") ";
	std::cout << "is in the triangle: " << (Point::bsp(A, B, C, P) ? "Yes" : "No");
	std::cout << std::endl;
}

int main(void)
{
	Point A(Fixed(0), Fixed(0));
	Point B(Fixed(2), Fixed(0));
	Point C(Fixed(0), Fixed(2));
	
	am_i_in(A, B, C, A);
	am_i_in(A, B, C, B);
	am_i_in(A, B, C, C);
	std::cout <<std::endl;
	am_i_in(A, B, C, Point(Fixed(0), Fixed(1)));
	am_i_in(A, B, C, Point(Fixed(1), Fixed(0)));
	am_i_in(A, B, C, Point(Fixed(1), Fixed(1)));
	std::cout <<std::endl;
	am_i_in(A, B, C, Point(Fixed(0.125f), Fixed(1)));
	am_i_in(A, B, C, Point(Fixed(1), Fixed(0.125f)));
	am_i_in(A, B, C, Point(Fixed(0.875f), Fixed(0.875f)));
	std::cout <<std::endl;
	am_i_in(A, B, C, Point(Fixed(-0.125f), Fixed(1)));
	am_i_in(A, B, C, Point(Fixed(1), Fixed(-0.125f)));
	am_i_in(A, B, C, Point(Fixed(1.125f), Fixed(1.125f)));
	return (0);
}
