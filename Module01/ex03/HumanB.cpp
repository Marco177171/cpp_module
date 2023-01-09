/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:57:42 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:57:42 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weap(NULL)
{
    std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB destructor called" << std::endl;
}

void HumanB::attack(void) const{
    if (this->_weap)
        std::cout << this->_name << " attacks with their " << this->_weap->getType() << std::endl;
    else
        std::cout << this->_name << " attacks with their bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weap)
{
    this->_weap = &weap;
}