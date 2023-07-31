/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geudes <geudes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:20:27 by geudes            #+#    #+#             */
/*   Updated: 2023/07/31 21:28:21 by geudes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() {}
Point::~Point() {}
Point::Point(Fixed const& otherx, Fixed const& othery)
{
    x = otherx;
    y = othery;
}
Point::Point(Point const& other)
{
    x = other.getX();
    y = other.getY();
}
Point& Point::operator=(const Point& other)
{
    x = other.getX();
    y = other.getY();
    return *this;
}

Fixed   Point::getX(void) const
{
    return x;
}
Fixed   Point::getY(void) const
{
    return y;
}

int Point::getRawBitsX(void) const
{
    return x.getRawBits();
}
int Point::getRawBitsY(void) const
{
    return y.getRawBits();
}

// Dont get fooled this isnt BSP
// Aint a math addict so: https://www.youtube.com/watch?v=HYAgJN3x4GA
// w12 are 2 vecktor parrallel to AB and AC respectivly
// w1 as w1 = k * V(AB)
// w2 as w2 = c * V(AC)
// if w1 and w2 are positives and wc1 + wc2 < 1 then its inside triangle
// Gotta hate/love math
bool    Point::bsp( Point const a, Point const b, Point const c, Point const point)
{
    int     Ax = a.getRawBitsX();
    int     Ay = a.getRawBitsY();
    int     Bx = b.getRawBitsX();
    int     By = b.getRawBitsY();
    int     Cx = c.getRawBitsX();
    int     Cy = c.getRawBitsY();
    int     Px = point.getRawBitsX();
    int     Py = point.getRawBitsY();
    float w1 = 0;
    float w2 = 0;

    w1 = float(Ax * (Cy - Ay) + (Py - Ay) * (Cx - Ax) - Px * (Cy - Ay)) / (((By - Ay) * (Cx - Ax)) - ((Bx - Ax) * (Cy - Ay)));
    w2 = float(Py - Ay - (w1 * (By - Ay))) / (Cy - Ay);

    return w1 > 0 && w2 > 0 && (w1 + w2) < 1;
}