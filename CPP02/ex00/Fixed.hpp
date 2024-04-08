/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:09:39 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/08 22:28:35 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_fixedPoint;
	static const int	_frBits = 8;

public:
	Fixed();
	Fixed( const Fixed &rhs );
	Fixed& operator=( const Fixed &rhs );
	~Fixed();

	int	getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif
