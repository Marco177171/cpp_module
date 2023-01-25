/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:07:49 by masebast          #+#    #+#             */
/*   Updated: 2023/01/25 13:28:16 by masebast         ###   ########.fr       */
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
	std::cout << source._name << "Cloned with constructor" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &source)
{
	this->_name = source._name;
	this->_hitPoints = source._hitPoints;
	this->_energy = source._energy;
	this->_attackDamage = source._attackDamage;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is kindly requesting a high fiiiiiivesss!" << std::endl;
}