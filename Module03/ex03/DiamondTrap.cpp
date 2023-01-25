/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:58:03 by masebast          #+#    #+#             */
/*   Updated: 2023/01/25 15:06:03 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap()
{
	this->_name = "DiamondTrap";
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attackDamage = 30;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ScavTrap(), FragTrap()
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attackDamage = 30;
	std::cout << "DiamondTrap name constructor called. Name: " << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &source)
{
	*this = source;
	std::cout << "DiamondTrap cloned with constructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &source)
{
	this->_name = source.DiamondTrap::_name;
	this->_hitPoints = source.DiamondTrap::_hitPoints;
	this->_energy = source.DiamondTrap::_energy;
	this->_attackDamage = source.DiamondTrap::_attackDamage;
	std::cout << "DiamondTrap cloned with operator" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << this->_name << " or " << this->ClapTrap::_name << ": Jerry: 'Who are you?' - Rick: 'Buddy, I've been asking myself that exact *BOOM!* same question'" << std::endl;
}