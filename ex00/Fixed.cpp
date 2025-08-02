/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:35:36 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/02 23:48:18 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const Fixed &copy): _fixedPointValue(copy._fixedPointValue)
{
	std::cout << "Copy Constructor Called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		_fixedPointValue = other._fixedPointValue;
	std::cout << "Copy Assignment Operator Called" << std::endl;
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
