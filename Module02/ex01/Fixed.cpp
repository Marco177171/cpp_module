/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:27:07 by masebast          #+#    #+#             */
/*   Updated: 2023/01/11 18:07:25 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intParameter)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatParameter)
{
	this->toInt();
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
	std::cout << "toInt called" << std::endl;
	return (roundf(this.));
}

float Fixed::toFloat(void) const
{
	std::cout << "toFloat called" << std::endl;
}