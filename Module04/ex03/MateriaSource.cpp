/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 22:13:41 by masebast          #+#    #+#             */
/*   Updated: 2023/02/01 20:37:12 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int index;

	index = -1;
	while (this->_inventory[++index])
		this->_inventory[index] = NULL;
	std::cout << "Default MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &source)
{
	int index;

	index = -1;
	while (this->_inventory[++index])
		this->_inventory[index] = source._inventory[index];
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &source)
{
	int index;

	index = -1;
	while (this->_inventory[++index])
		this->_inventory[index] = source._inventory[index];
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* m)
{
	int index;

	index = -1;
	while (this->_inventory[++index])
	{
		if (this->_inventory[index] == NULL)
		{
			this->_inventory[index] = m->clone();
			break ;
		}
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int index;

	index = -1;
	while (!this->_inventory[++index]->getType().compare(type))
		return (this->_inventory[index]->clone());
	return (0);
}