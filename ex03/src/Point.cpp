/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 00:20:50 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/25 15:09:18 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{}

Point::Point(const float x, const float y): _x(x), _y(y)
{}

Point::Point(const Point &copy): _x(copy._x), _y(copy._y)
{}

Point::~Point() 
{}

Point &Point::operator=(const Point &other)
{
	(void)other;
	return (*this);
}

const Fixed	&Point::getX() const
{
	return (_x);
}

const Fixed	&Point::getY() const
{
	return (_y);
}
