/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:35:58 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/12 21:56:31 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int						_fixedPointValue;
		static const int		_fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();
		
		Fixed					&operator=(const Fixed &other);

		bool					operator<(const Fixed &other) const;
		bool					operator>(const Fixed &other) const;
		bool					operator==(const Fixed &other) const;
		bool					operator!=(const Fixed &other) const;
		bool					operator<=(const Fixed &other) const;
		bool					operator>=(const Fixed &other) const;

		Fixed					operator+(const Fixed &other) const;
		Fixed					operator-(const Fixed &other) const;
		Fixed					operator*(const Fixed &other) const;
		Fixed					operator/(const Fixed &other) const;

		Fixed					operator++(int);
		Fixed					operator--(int);
		Fixed					operator++();
		Fixed					operator--();

		int						getRawBits(void) const;
		void					setRawBits(const int raw);

		float					toFloat(void) const;
		int						toInt(void) const;

		static Fixed			&min(Fixed &one, Fixed &two);
		static const Fixed		&min(const Fixed &one, const Fixed &two);
		static Fixed			&max(Fixed &one, Fixed &two);
		static const Fixed		&max(const Fixed &one, const Fixed &two);
};

std::ostream &operator<<(std::ostream &other, const Fixed &fixed);

#endif
