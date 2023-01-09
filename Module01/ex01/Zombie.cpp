/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:57:18 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:57:19 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string s)
{
	this->_name = s;
	std::cout << "Constructor called a zombie: " << s << std::endl;
}

Zombie::Zombie(void)
{
	this->_name = "A zombie without a name";
	std::cout << "Constructor called on zombie" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " has been detroyed" << std::endl;
}

std::string Zombie::getName(void) const
{
	return (this->_name);
}

void Zombie::announce(void) const
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}
