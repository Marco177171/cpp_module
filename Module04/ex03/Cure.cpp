/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:57:42 by masebast          #+#    #+#             */
/*   Updated: 2023/02/02 19:13:30 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &src)
{
	this->_type = src.getType();
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &src)
{
	this->_type = src.getType();
	std::cout << "Cure overload constructor called" << std::endl;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}


void Cure::use(ICharacter &target)
{
	std::cout << this->_type << " Cures " << target.getName() << "!" << std::endl;
}

AMateria* Cure::clone(void) const
{
	return (new Cure());
}