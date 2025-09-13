/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 00:21:58 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/25 15:24:33 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point);

int	main()
{
	Point a(0, 0);
	Point b(1, 0);
	Point c(0, 1);

	std::cout << "*============* Point On Point *============*" << std::endl;
	std::cout << "A: " << bsp(a, b, c, Point(0, 0)) << std::endl;
	std::cout << "B: " << bsp(a, b, c, Point(1, 0)) << std::endl;
	std::cout << "C: " << bsp(a, b, c, Point(0, 1)) << "\n" << std::endl;

	std::cout << "*============* Point On Line *=============*" << std::endl;
	std::cout << "AB: " << bsp(a, b, c, Point(0.5f, 0)) << std::endl;
	std::cout << "AC: " << bsp(a, b, c, Point(0, 0.5f)) << std::endl;
	std::cout << "BC: " << bsp(a, b, c, Point(0.5f, 0.5f)) << "\n" << std::endl;

	std::cout << "*============* Point In Area *=============*" << std::endl;
	std::cout << "(0.25/0.25): " << bsp(a, b, c, Point(0.25f, 0.25f)) << std::endl;
	std::cout << "(0.4/0.4): " << bsp(a, b, c, Point(0.4f, 0.4f)) << std::endl;
	std::cout << "(0.1/0.1): " << bsp(a, b, c, Point(0.1f, 0.1f)) << "\n" << std::endl;

	std::cout << "*==========* Point Outside Area *==========*" << std::endl;
	std::cout << "(1/1): " <<  bsp(a, b, c, Point(1, 1)) << std::endl;
	std::cout << "(1/-1): " << bsp(a, b, c, Point(1, -1)) << std::endl;
	std::cout << "(-1/1): " << bsp(a, b, c, Point(-1, 1)) << std::endl;
}
