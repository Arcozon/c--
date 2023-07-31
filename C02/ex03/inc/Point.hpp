/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:15:48 by geudes            #+#    #+#             */
/*   Updated: 2023/07/31 20:49:52 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
	private:
		Fixed x;
		Fixed y;
	public:
		Point();
		Point(Point const& other);
		Point(Fixed const& otherx, Fixed const& othery);
		~Point();
		Point& operator=(const Point& other);

        Fixed getX(void) const;
        Fixed getY(void) const;
		int getRawBitsX(void) const;
        int getRawBitsY(void) const;

		static bool bsp( Point const a, Point const b, Point const c, Point const point);
};

#endif