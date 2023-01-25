/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:58:03 by masebast          #+#    #+#             */
/*   Updated: 2023/01/25 17:07:59 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "Default DiamondTrap";
	this->FragTrap::setHitPoints(FragTrap::getHitPoints());
	this->ScavTrap::setEnergy(ScavTrap::getEnergy());
	this->FragTrap::setAttack(FragTrap::getAttack());
	this->FragTrap::ClapTrap::setName(this->_name + "_clap_name");
	std::cout << "Default DiamondTrap construcotr called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(), FragTrap()
{
	this->_name = name;
	this->FragTrap::setHitPoints(FragTrap::getHitPoints());
	this->ScavTrap::setEnergy(ScavTrap::getEnergy());
	this->FragTrap::setAttack(FragTrap::getAttack());
	this.FragTrap::ClapTrap::setName(this->_name + "_clap_name");
	std::cout << "Default DiamondTrap construcotr called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &source)
{
	*this = source;
	std::cout << "DiamondTrap cloned with constructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &source)
{
	
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << this->_name << " or " << this->ClapTrap::_name << " debug message" << std::endl;
	std::cout << "Jerry: 'Who are you?' - Rick: 'Buddy, I've been asking myself that exact *BOOM!* same question...'" << std::endl;
}