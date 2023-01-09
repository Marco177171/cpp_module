/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:57:52 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:57:52 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    std::cout << "Weapon constructor called" << std::endl;
}

Weapon::Weapon(void) : _type(NULL)
{
    std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon destructor called" << std::endl;
}

std::string const& Weapon::getType(void) const
{
    return (this->_type);
}

void Weapon::setType(std::string type)
{
    this->_type = type;
}