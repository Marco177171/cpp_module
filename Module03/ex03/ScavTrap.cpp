/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:48:08 by masebast          #+#    #+#             */
/*   Updated: 2023/01/25 16:44:57 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_name = "Default ScavTrap";
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}
 
ScavTrap::ScavTrap(ScavTrap const &source)
{
	*this = source;
	std::cout << "Operator constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &source)
{
	this->_name = source._name;
	this->_hitPoints = source._hitPoints;
	this->_energy = source._energy;
	this->_attackDamage = source._attackDamage;
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void ScavTrap::setEnergy(int energy)
{
	this->_energy = energy;
}

void ScavTrap::setAttack(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

int ScavTrap::getHitPoints(void)
{
	return (this->_hitPoints);
}

int ScavTrap::getEnergy(void)
{
	return (this->_energy);
}

int ScavTrap::getAttack(void)
{
	return (this->_attackDamage);
}

void ScavTrap::guardGate(void)
{
	std::cout << this->_name << " is guarding the gate" << std::endl;
}