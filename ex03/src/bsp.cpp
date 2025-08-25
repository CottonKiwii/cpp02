/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 00:36:24 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/25 15:02:39 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	getTriangle(const Point a, const Point b, const Point c)
{
	Fixed res;

	res = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY())
		+ c.getX() * (a.getY() - b.getY()));
	if (res.toFloat() < 0)
		res = res * -1;
	res = res / 2;
	return (res);
}

static bool	checkLine(const Point a, const Point b, const Point point)
{
	return ((a.getX() - point.getX()) * (point.getY() - b.getY())
		== (point.getX() - b.getX()) * (a.getY() - point.getY()));
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed	area;

	area = getTriangle(a, b, point) + getTriangle(a, c, point) + getTriangle(b, c, point);

	if (checkLine(a, b, point) || checkLine(b, c, point) || checkLine(a, c, point))
		return (false);
	if (area == getTriangle(a, b, c))
		return (true);
	return (false);
}
