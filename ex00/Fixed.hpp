/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolfram <jwolfram@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:35:58 by jwolfram          #+#    #+#             */
/*   Updated: 2025/08/02 23:48:23 by jwolfram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits;

	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		
		Fixed				&operator=(const Fixed &other);

		int					getRawBits(void) const;
		void				setRawBits(const int raw);
};

#endif
