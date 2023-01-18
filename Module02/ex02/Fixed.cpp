/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:09:19 by masebast          #+#    #+#             */
/*   Updated: 2023/01/18 16:33:53 by masebast         ###   ########.fr       */
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

Fixed Fixed::operator++(int increase)
{
	this->_fixedNumber = this->_fixedNumber + increase;
	return (*this);
}

Fixed Fixed::operator--(int decrease)
{
	this->_fixedNumber = this->_fixedNumber - decrease;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_fractionalBitsValue);
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

std::ostream &operator<<(std::ostream &output, Fixed const &input)
{
	output << input.toFloat();
	return (output);
}
