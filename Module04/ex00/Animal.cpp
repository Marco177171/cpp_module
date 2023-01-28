/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:53:30 by masebast          #+#    #+#             */
/*   Updated: 2023/01/28 18:58:26 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
    this->_type = "Animal";
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	this->_type = src._type;
	std::cout << "Animal overload constructor called" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void)
{
	std::cout << "Animal makes sound!" << std::endl;
	std::cout << "AAOOOOO!" << std::endl;
}

std::string Animal::getType(void)
{
    return (this->_type);
}