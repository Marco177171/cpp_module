/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:29:05 by masebast          #+#    #+#             */
/*   Updated: 2023/01/20 20:49:21 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point(void)
{
	this->x = 0;
	this->y = 0;
}

Point::Point(Fixed x, Fixed y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const float x, const float y)
{
	this->x = Fixed(x);
	this->y = Fixed(y);
}

Point::Point(const Point &source)
{
	*this = source;
}

Fixed Point::getX() const
{
	return (this->x);
}

Fixed Point::getY() const
{
	return (this->y);
}

Point &Point::operator=(const Point &source)
{
	this->x = source.x;
	this->y = source.y;
	return (*this);
}

bool Point::operator==(const Point &p1) const
{
	if (this->x == p1.x && this->y == p1.y)
		return (true);
	return (false);
}

Point::~Point(void)
{}

std::ostream &operator<<(std::ostream &output, Fixed const &input)
{
	output << input.toFloat();
	return (output);
}
