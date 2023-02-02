/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:13:41 by masebast          #+#    #+#             */
/*   Updated: 2023/02/02 21:50:09 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int index;

	index = 0;
	while (index < 4)
		this->_inventory[index++] = NULL;
	std::cout << "Default MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &source)
{
	int index;

	index = 0;
	while (index < 4)
	{
		this->_inventory[index] = (source._inventory[index])->clone();
		index++;
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &source)
{
	int index;

	index = -1;
	while (this->_inventory[++index])
	{
		if (this->_inventory[index])
			delete this->_inventory[index];
		if (source._inventory[index])
			this->_inventory[index] = (source._inventory[index])->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	int index;

	index = -1;
	while (this->_inventory[++index])
		if (this->_inventory[index])
			delete this->_inventory[index];
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	int index;

	index = 0;
	std::cout << "AAAAAAAAAAAAAA" << std::endl;
	while (this->_inventory[index] != NULL)
		index++;
	if (index >= 4)
	{
		std::cout << "No space in inventory" << std::endl;
		return ;
	}
	else
		this->_inventory[index] = m;
		std::cout << m->getType() << " ïndex = " << index << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int index;

	index = 0;
	std::cout << "createMateria" << std::endl;
	while (this->_inventory[index] && this->_inventory[index]->getType().compare(type) && index < 4)
		index++;
	if (index >= 4 || !(this->_inventory)[index])
	{
		std::cout << "return" << std::endl;
		return (NULL);
	}
	std::cout << "Inventory 0 " << index << this->_inventory[0]->getType() << type << std::endl;
	return ((this->_inventory[index])->clone());
}