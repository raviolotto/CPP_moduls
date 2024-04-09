/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:09:39 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/09 18:42:02 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_fixedPoint;
	static const int	_frBits = 8;

public:

	//cons & dis
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &rhs );
	~Fixed();

	//overload
	Fixed& operator=( const Fixed &rhs );

	bool	operator>(const Fixed & rhs) const;
	bool	operator>=(const Fixed & rhs) const;
	bool	operator<(const Fixed & rhs) const;
	bool	operator<=(const Fixed & rhs) const;
	bool	operator==(const Fixed & rhs) const;
	bool	operator!=(const Fixed & rhs) const;

	Fixed	operator+(const Fixed & rhs) const;
	Fixed	operator-(const Fixed & rhs) const;
	Fixed	operator*(const Fixed & rhs) const;
	Fixed	operator/(const Fixed & rhs) const;

	Fixed&	operator++(void); //pre-increment
	Fixed	operator++(int); //post-increment
	Fixed&	operator--(void);
	Fixed	operator--(int);


	//others
	void	setRawBits( int const raw );
	int		getRawBits( void ) const;
	int		toInt( void ) const;
	float	toFloat( void ) const;
	static Fixed& min( Fixed &a, Fixed &b );
	static const Fixed& min( const Fixed &a, const Fixed &b );
	static Fixed& max( Fixed &a, Fixed &b );
	static const Fixed& max( const Fixed &a, const Fixed &b );

}; //

std::ostream & operator<<( std::ostream & ost, Fixed const & i );

#endif
