/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:13:37 by masebast          #+#    #+#             */
/*   Updated: 2023/02/01 20:19:45 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &source)
{
	this->_type = source._type;
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &source)
{
	this->_type = source._type;
	std::cout << "AMateria overload constructor called" << std::endl;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria default destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

AMateria* AMateria::clone() const
{
	return (new AMateria(*this));
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria using " << target.getName() << std::endl;
}