/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:35:36 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/25 14:51:19 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/*																			  */
/*						CONSTRUCTORS AND DESTRUCTOR							  */
/*																			  */
/* ************************************************************************** */

Fixed::Fixed(): _fixedPointValue()
{}

Fixed::Fixed(const int val)
{
	_fixedPointValue = val << _fractionalBits; 
}

Fixed::Fixed(const float val)
{
	_fixedPointValue = roundf(val * (1 << _fractionalBits)); 
}

Fixed::Fixed(const Fixed &copy): _fixedPointValue(copy._fixedPointValue)
{}

Fixed::~Fixed()
{}

/* ************************************************************************** */
/*																			  */
/*								OPERATORS									  */
/*																			  */
/* ************************************************************************** */

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		_fixedPointValue = other.getRawBits();
	return (*this);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->_fixedPointValue < other._fixedPointValue);	
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->_fixedPointValue > other._fixedPointValue);	
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->_fixedPointValue == other._fixedPointValue);	
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->_fixedPointValue != other._fixedPointValue);	
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->_fixedPointValue <= other._fixedPointValue);	
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->_fixedPointValue >= other._fixedPointValue);	
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed	res;

	res.setRawBits(this->_fixedPointValue + other._fixedPointValue);
	return (res);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed	res;

	res.setRawBits(this->_fixedPointValue - other._fixedPointValue);
	return (res);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed	res(this->toFloat() * other.toFloat());

	return (res);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed	res(this->toFloat() / other.toFloat());

	return (res);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->_fixedPointValue++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	this->_fixedPointValue--;
	return (tmp);
}

Fixed Fixed::operator++()
{
	return (this->_fixedPointValue++, *this);
}

Fixed Fixed::operator--()
{
	return (this->_fixedPointValue--, *this);
}

/* ************************************************************************** */
/*																			  */
/*							MEMBER FUNCTIONS								  */
/*																			  */
/* ************************************************************************** */

int	Fixed::getRawBits() const
{
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

	i = (int)_fixedPointValue >> _fractionalBits;
	return (i);
}

Fixed &Fixed::min(Fixed &one, Fixed &two)
{
	if (one < two)
		return (one);
	return (two);
}

const Fixed &Fixed::min(const Fixed &one, const Fixed &two)
{
	if (one < two)
		return (one);
	return (two);
}

Fixed &Fixed::max(Fixed &one, Fixed &two)
{
	if (one > two)
		return (one);
	return (two);
}

const Fixed &Fixed::max(const Fixed &one, const Fixed &two)
{
	if (one > two)
		return (one);
	return (two);
}
