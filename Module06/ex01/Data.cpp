/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:08:27 by masebast          #+#    #+#             */
/*   Updated: 2023/02/11 12:46:12 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : _value(0)
{
	std::cout << "Data default constructor called" << std::endl;
}

Data::Data(int n) : _value(n)
{
	std::cout << "Data default constructor called" << std::endl;
}


Data::Data(Data const &source) : _value(source._value)
{
	std::cout << "Data copy constructor called" << std::endl;
}

Data &Data::operator=(Data const &source)
{
	this->_value = source._value;
	std::cout << "Data overload constructor called" << std::endl;
	return (*this);
}

Data::~Data()
{
	std::cout << "Data destructor called" << std::endl;
}

int Data::getValue(void)
{
	return (this->_value);
}

uintptr_t serialize(Data *ptr)
{
	uintptr_t result;

	std::cout << "serilize called" << std::endl;
	result = reinterpret_cast<uintptr_t>(ptr);
	std::cout << "uintptr_t: " << &result << std::endl;
	return (result);
}

Data *deserialize(uintptr_t raw)
{
	Data *result;

	std::cout << "deserialize called" << std::endl;
	result = reinterpret_cast<Data*>(raw);
	std::cout << "Data: " << result << std::endl;
	return (result);
}