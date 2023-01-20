/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:28:52 by masebast          #+#    #+#             */
/*   Updated: 2023/01/20 19:52:16 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedNumber = 0;
}

Fixed::Fixed(int integer)
{
	this->_fixedNumber = integer;
	this->_fixedNumber <<= this->_fractionalBitsValue;
}

Fixed::Fixed(float floating)
{
	this->_fixedNumber = (int) (roundf(floating * (1 << this->_fractionalBitsValue)));
}

Fixed::Fixed(Fixed const &source)
{
	*this = source;
}

Fixed &Fixed::operator=(Fixed const &source)
{
	this->_fixedNumber = source._fixedNumber;
	return (*this);
}

Fixed::~Fixed()
{}

bool Fixed::operator>(Fixed const &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(Fixed const &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(Fixed const &operand)
{
	Fixed result(*this);

	result.setRawBits(this->getRawBits() + operand.getRawBits());
	return (result);
}

Fixed Fixed::operator-(Fixed const &operand)
{
	Fixed result(*this);

	result.setRawBits(this->getRawBits() - operand.getRawBits());
	return (result);
}

Fixed Fixed::operator*(Fixed const &operand)
{
	Fixed result(*this);
	long a;
	long b;

	a = (long) this->getRawBits();
	b = (long) operand.getRawBits();
	result.setRawBits((a * b) / (1 << Fixed::_fractionalBitsValue));
	return (result);
}

Fixed Fixed::operator/(Fixed const &operand)
{
	Fixed result(*this);

	result.setRawBits(this->getRawBits() / operand.getRawBits());
	return (result);
}

Fixed Fixed::operator++(void)
{
	this->_fixedNumber++;
	return (*this);
}

Fixed Fixed::operator--(void)
{
	this->_fixedNumber--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed result;

	result = *this;
	++*this;
	return (result);
}

Fixed Fixed::operator--(int)
{
	Fixed result;

	result = *this;
	--*this;
	return (result);
}

int Fixed::getRawBits(void) const
{
	return (this->_fixedNumber);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedNumber = raw;
}

float Fixed::toFloat(void) const
{
	return ((float) this->_fixedNumber / (float) (1 << this->_fractionalBitsValue));
}

int Fixed::toInt(void) const
{
	return (this->_fixedNumber >> this->_fractionalBitsValue);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f2);
	return (f1);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1 > f2)
		return (f2);
	return (f1);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1 < f2)
		return (f2);
	return (f1);
}