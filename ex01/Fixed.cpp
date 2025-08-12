/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:35:36 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/12 03:31:47 by jwolfram         ###   ########.fr       */
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
	_fixedPointValue = val << _fractionalBits; 
}

Fixed::Fixed(const float val)
{
	std::cout << "Float Constructor Called" << std::endl;
	_fixedPointValue = val * (1 << _fractionalBits); 
}

Fixed::Fixed(const Fixed &copy): _fixedPointValue(copy._fixedPointValue)
{
	std::cout << "Copy Constructor Called" << std::endl;
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

	f = (float)_fixedPointValue / (1 << _fractionalBits);
	return (f);
}

int Fixed::toInt() const
{
	int	i;

	i = (int)roundf(_fixedPointValue) >> _fractionalBits;
	return (i);
}
