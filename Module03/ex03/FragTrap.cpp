/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:07:49 by masebast          #+#    #+#             */
/*   Updated: 2023/01/28 16:50:26 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "Default FragTrap";
	this->_hitPoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &source)
{
	*this = source;
	std::cout << source._name << " cloned with constructor" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &source)
{
	this->_name = source._name;
	this->_hitPoints = source._hitPoints;
	this->_energy = source._energy;
	this->_attackDamage = source._attackDamage;
	std::cout << source._name << " cloned with operator" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}
void FragTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void FragTrap::setEnergy(int energy)
{
	this->_energy = energy;
}

void FragTrap::setAttack(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

int FragTrap::getHitPoints(void)
{
	return (this->_hitPoints);
}

int FragTrap::getEnergy(void)
{
	return (this->_energy);
}

int FragTrap::getAttack(void)
{
	return (this->_attackDamage);
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is kindly requesting a high fiiiiiivesss!" << std::endl;
}