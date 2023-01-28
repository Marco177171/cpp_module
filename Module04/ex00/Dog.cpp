/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:51:25 by masebast          #+#    #+#             */
/*   Updated: 2023/01/28 19:51:04 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &src)
{
	this->_type = src._type;
	std::cout << "Dog overload constructor called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Dog makes sound!" << std::endl;
	std::cout << "Woof!" << std::endl;
}