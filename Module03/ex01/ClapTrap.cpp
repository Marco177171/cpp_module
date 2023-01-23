/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:21:37 by masebast          #+#    #+#             */
/*   Updated: 2023/01/23 18:49:58 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 10;
	this->_energy = 10;
	this->_attackDamage = 0;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energy <= 0)
		return ;
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage (unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << this->_name << " was inflicted " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0)
		return ;
	std::cout << this->_name << " repairs itself with " << amount << " points!" << std::endl;
	this->_hitPoints += amount;
	if (this->_hitPoints > 10)
		this->_hitPoints = 10;
	this->_energy--;
	std::cout << "Current hit points: " << this->_hitPoints << std::endl;
	std::cout << "Current energy: " << this->_energy << std::endl;
}