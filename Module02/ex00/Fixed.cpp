/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:05:29 by masebast          #+#    #+#             */
/*   Updated: 2023/01/10 18:30:37 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed *fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointNumberValue = fixed->_fixedPointNumberValue;
	std::cout << "Copy assignment operator called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member funtion called" << std::endl;
	std::cout << this->_fractionalBitsAmount << std::endl;
	return (0);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointNumberValue = raw;
	std::cout << "setRawBits called" << std::endl;
}