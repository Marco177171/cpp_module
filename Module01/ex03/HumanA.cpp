/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:57:36 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:57:37 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weap)
{
    this->_weap = &weap;
    this->_name = name;
    std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA destructor called" << std::endl;
}

std::string HumanA::getName(void) const
{
    return (this->_name);
}

void HumanA::attack(void) const
{
	std::cout << this->getName() << " attacks with their " << this->_weap->getType() << std::endl;
}
