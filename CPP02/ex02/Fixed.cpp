/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacopo <jacopo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:09:12 by jacopo            #+#    #+#             */
/*   Updated: 2024/04/09 19:00:50 by jacopo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//cos e dis

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPoint = 0;
}

Fixed::Fixed(const Fixed & fx)
{
	std::cout << "Copy constructor called" << std::endl;
	//this->_fixedPoint = fx.getRawBits();
	*this = fx;
}

Fixed::Fixed(const int value)
{
	std::cout << "int constructor called" << std::endl;
	this->_fixedPoint = value << _frBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "float constructor called" << std::endl;
	this->_fixedPoint = roundf(value * (1 << _frBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//basic function

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}


float Fixed::toFloat( void ) const
{
	return  static_cast<float> (this->_fixedPoint) / (1 << this->_frBits);
}

int Fixed::toInt(void) const
{
	return this->_fixedPoint >> this->_frBits;
}

std::ostream & operator<<( std::ostream & ost, Fixed const & i )
{
	ost << i.toFloat();
	return ost;
}

//overload

Fixed& Fixed::operator=( const Fixed &rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

//compare overload

bool Fixed::operator>(const Fixed & rhs) const
{
	return this->_fixedPoint > rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed & rhs) const
{
	return this->_fixedPoint >= rhs.getRawBits();
}

bool Fixed::operator<(const Fixed & rhs) const
{
	return this->_fixedPoint < rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed & rhs) const
{
	return this->_fixedPoint <= rhs.getRawBits();
}

bool Fixed::operator==(const Fixed & rhs) const
{
	return this->_fixedPoint == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed & rhs) const
{
	return this->_fixedPoint != rhs.getRawBits();
}

//arithmetic overload

Fixed Fixed::operator+(const Fixed & rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed & rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed & rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed & rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

// increment and decrement overload

Fixed& Fixed::operator++(void)
{
	this->_fixedPoint += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixedPoint += 1;
	return tmp;
}

Fixed& Fixed::operator--(void)
{
	this->_fixedPoint -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fixedPoint -= 1;
	return tmp;
}

//min and max function

Fixed& Fixed::min( Fixed &a, Fixed &b )
{
	return (a < b)? a : b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b )
{
	return (a < b)? a : b;
}
Fixed& Fixed::max( Fixed &a, Fixed &b )
{
	return (a > b)? a : b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b )
{
	return (a > b)? a : b;
}
