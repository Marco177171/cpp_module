/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:29:05 by masebast          #+#    #+#             */
/*   Updated: 2023/01/19 18:18:35 by masebast         ###   ########.fr       */
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

Point &Point::operator=(const Point &source)
{
	this->x = source.x;
	this->y = source.y;
	return (*this);
}

Point::~Point(void)
{}

std::ostream &operator<<(std::ostream &output, Fixed const &input)
{
	output << input.toFloat();
	return (output);
}

std::istream &operator>>(std::istream &input, float &inFixed)
{
	input >> inFixed;
	return (input);
}