/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 00:09:01 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/25 14:36:34 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &copy);
		~Point();

		Point	&operator=(const Point &other);
	
		const Fixed	&getX() const;
		const Fixed	&getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
