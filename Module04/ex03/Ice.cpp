/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:57:49 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 22:07:42 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "Ice";
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &src)
{
	*this = src;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &src)
{
	this->_type = src._type;
	std::cout << "Ice overload constructor called" << std::endl;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Cure destructor called" << std::endl;
}