/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:58:03 by masebast          #+#    #+#             */
/*   Updated: 2023/01/28 17:48:12 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "Default DiamondTrap";
	this->FragTrap::setHitPoints(FragTrap::getHitPoints());
	this->ScavTrap::setEnergy(ScavTrap::getEnergy());
	this->FragTrap::setAttack(FragTrap::getAttack());
	ClapTrap::setName(this->_name + "_clap_name");
	std::cout << "Default DiamondTrap construcotr called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	this->FragTrap::setHitPoints(FragTrap::getHitPoints());
	this->ScavTrap::setEnergy(ScavTrap::getEnergy());
	this->FragTrap::setAttack(FragTrap::getAttack());
	this->ScavTrap::setName(this->_name + "_clap_name");
	std::cout << "Default DiamondTrap construcotr called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &source)
{
	*this = source;
	std::cout << "DiamondTrap cloned with constructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &source)
{
	this->_name = source._name;
	this->_hitPoints = source._hitPoints;
	this->_energy = source._energy;
	this->_attackDamage = source._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	std::cout << this->_name << " attacks " << target << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << " or " << ClapTrap::getName() << " debug message" << std::endl;
	std::cout << "Jerry: 'Who are you?' - Rick: 'Buddy, I've been asking myself that exact *BOOM!* same question...'" << std::endl;
}