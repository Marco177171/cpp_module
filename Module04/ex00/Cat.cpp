/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:51:10 by masebast          #+#    #+#             */
/*   Updated: 2023/01/28 19:51:09 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Default cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	this->_type = src._type;
	std::cout << "Cat overload constructor called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Cat makes sound!" << std::endl;
	std::cout << "Meow!" << std::endl;
}