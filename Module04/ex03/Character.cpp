/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:58:19 by masebast          #+#    #+#             */
/*   Updated: 2023/02/06 15:26:10 by masebast         ###   ########.fr       */
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
	_dropped = NULL;
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
	_dropped = NULL;
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
	_dropped = NULL;
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
	_dropped = NULL;
	return (*this);
}

Character::~Character(void)
{
	int index;
	dropped *tmp;

	index = 0;
	while (index < 4)
	{
		if (this->inventory[index])
			delete this->inventory[index];
		index++;
	}
	if (_dropped)
	{
		while (_dropped)
		{
			tmp = _dropped;
			_dropped = _dropped->_next;
			delete(tmp->_content);
			delete(tmp);
		}
	}
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
	this->dropMateria(this->inventory[idx]);
	this->inventory[idx] = NULL;
	std::cout << "inventory slot nullified" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	this->inventory[idx]->use(target);
}

void Character::dropMateria(AMateria *toDrop)
{
	std::cout << "in dropMateria" << std::endl;
	dropped	*newDrop = new dropped();
	newDrop->_content = toDrop;
	std::cout << "NULL" << std::endl;
	newDrop->_next = NULL;
	if (_dropped == NULL)
		_dropped = newDrop;
	else {
		dropped *tmp = _dropped;
		while (tmp->_next)
			tmp = tmp->_next;
		tmp->_next = newDrop;
	}
	// if (!this->_dropped->_content)
	// {
	// 	std::cout << "empty" << std::endl;
	// 	this->_dropped->_content = toDrop;
	// 	this->_dropped->_next = new droppedMateria();
	// 	std::cout << this->_dropped->_content->getType() << " dropped by " << this->_type << std::endl;
	// 	return ;
	// }
	// while (this->_dropped->_next)
	// {
	// 	std::cout << "here" << std::endl;
	// 	cursor = this->_dropped->_next;
	// 	if (!cursor->_content)
	// 		break ;
	// }
	// cursor->_content = toDrop;
	// std::cout << cursor->_content->getType() << " dropped by " << this->_type << std::endl;
	// this->_dropped->_next = new droppedMateria();
}