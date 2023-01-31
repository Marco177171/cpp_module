/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:57:42 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 22:07:23 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	this->_type = "Cure";
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &src)
{
	*this = src;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &src)
{
	this->_type = src._type;
	std::cout << "Cure overload constructor called" << std::endl;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}