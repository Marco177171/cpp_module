/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:27:07 by masebast          #+#    #+#             */
/*   Updated: 2023/01/17 17:46:36 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intParameter)
{
	this->_fixedPoint = intParameter;
	this->_fixedPoint <<= this->_fractionalBitsValue;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatParameter)
{
	this->_fixedPoint = (int) roundf(floatParameter * (1 << this->_fractionalBitsValue));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &source)
{
	*this = source;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = source._fixedPoint;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
	return (this->_fixedPoint >> this->_fractionalBitsValue);
}

float Fixed::toFloat(void) const
{
	return ((float) this->_fixedPoint / (float) (1 << this->_fractionalBitsValue));
}

std::ostream &operator<<(std::ostream &output, Fixed const &source)
{
	output << source.toFloat();
	return (output);
}