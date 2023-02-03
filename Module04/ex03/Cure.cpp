/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:57:42 by masebast          #+#    #+#             */
/*   Updated: 2023/02/03 17:41:57 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure(void) : AMateria("cure")
{}

Cure::Cure(const Cure &src)
{
	this->_type = src.getType();
}

Cure &Cure::operator=(const Cure &src)
{
	this->_type = src.getType();
	return (*this);
}

Cure::~Cure(void)
{}

AMateria* Cure::clone(void) const
{
	return (new Cure());
}