/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:13:41 by masebast          #+#    #+#             */
/*   Updated: 2023/02/03 20:50:35 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int index;

	index = 0;
	while (index < 4)
		this->_inventory[index++] = NULL;
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
}

void MateriaSource::learnMateria(AMateria* m)
{
	int index;

	index = 0;
	while (this->_inventory[index] != NULL)
		index++;
	if (index >= 4)
		return ;
	else
		this->_inventory[index] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int index;

	index = 0;
	while (this->_inventory[index] && this->_inventory[index]->getType().compare(type) && index < 4)
		index++;
	if (index >= 4 || !(this->_inventory)[index])
		return (NULL);
	return ((this->_inventory[index])->clone());
}