/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:13:37 by masebast          #+#    #+#             */
/*   Updated: 2023/02/03 17:45:47 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{}

AMateria::AMateria(const AMateria &source)
{
	this->_type = source._type;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
}

AMateria &AMateria::operator=(const AMateria &source)
{
	this->_type = source._type;
	return (*this);
}

AMateria::~AMateria(void)
{}

std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	if (this->_type.compare("ice") == 0)
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_type.compare("cure") == 0)
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}