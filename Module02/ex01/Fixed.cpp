/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:27:07 by masebast          #+#    #+#             */
/*   Updated: 2023/01/17 16:26:07 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intParameter)
{
	this->_Param = intParameter;
	this->_Param = this->toFloat();
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatParameter)
{
	this->_Param = floatParameter;
	this->_Param = this->toInt();
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_Param = source.toInt();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
	return (this->_Param >> this->_fractionalBitsValue);
}

float Fixed::toFloat(void) const
{
	return ((float) this->_Param / (float) (1 << this->_fractionalBitsValue));
}

std::ostream &operator<<(std::ostream &output, Fixed const &source)
{
	output << source.toFloat();
	return (output);
}