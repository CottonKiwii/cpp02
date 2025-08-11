/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:35:36 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/11 21:28:08 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixedPointValue()
{
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int Constructor Called" << std::endl;
	_fixedPointValue = val << 4; 
}

Fixed::Fixed(const float val)
{
	std::cout << "Float Constructor Called" << std::endl;
	_fixedPointValue = val / (1 << 8); 
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Constructor Called" << std::endl;
	_fixedPointValue = copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy Assignment Operator Called" << std::endl;
	if (this != &other)
		_fixedPointValue = other.getRawBits();
	return (*this);
}

Fixed &Fixed::operator<<(const Fixed &other)
{
	std::cout << other.toFloat() << std::endl;
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits Member Function Called" << std::endl;
	return (_fixedPointValue);
}

void Fixed::setRawBits(const int raw)
{
	_fixedPointValue = raw;
}

float Fixed::toFloat() const
{
	float	f;

	f = (float)_fixedPointValue * (1 >> 8);
	return (f);
}

int Fixed::toInt() const
{
	int	i;

	i = (int)std::roundf(_fixedPointValue) >> 4;
	return (i);
}
