/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:58:19 by masebast          #+#    #+#             */
/*   Updated: 2023/02/02 21:59:39 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	int index;

	index = 0;
	this->_type = "Default Character";
	while (index < 4)
	{
		this->inventory[index] = NULL;
		index++;
	}
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(const Character &source)
{
	int index;

	index = 0;
	this->_type = source._type;
	while (index < 4)
	{
		this->inventory[index] = source.inventory[index];
		index++;
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character::Character(std::string type)
{
	int index;

	index = 0;
	this->_type = type;
	while (index < 4)
	{
		this->inventory[index] = NULL;
		index++;
	}
	std::cout << "Character type constructor called" << std::endl;
}

Character &Character::operator=(const Character &source)
{
	int index;

	index = 0;
	this->_type = source._type;
	while (index < 4)
	{
		this->inventory[index] = NULL;
		index++;
	}
	std::cout << "Character overload constructor called" << std::endl;
	return (*this);
}

Character::~Character(void)
{
	int index;

	index = 0;
	while (index < 4)
	{
		if (this->inventory[index])
			delete this->inventory[index];
		index++;
	}
	std::cout << "Character destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->_type);
}

void Character::equip(AMateria* m)
{
	int index;

	index = 0;
	while (index < 4)
	{
		std::cout << "--- Cycling Character Inventory" << std::endl;
		if (this->inventory[index] == NULL)
		{
			this->inventory[index] = m;
			break ;
		}
		index++;
	}
}

void Character::unequip(int idx)
{
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}