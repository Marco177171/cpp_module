/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:57:49 by masebast          #+#    #+#             */
/*   Updated: 2023/02/02 19:13:37 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src.getType())
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &src)
{
	this->_type = src.getType();
	std::cout << "Ice overload constructor called" << std::endl;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Cure destructor called" << std::endl;
}


void Ice::use(ICharacter &target)
{
	std::cout << this->_type << " shoots an Ice bolt at " << target.getName() << "!" << std::endl;
}

AMateria* Ice::clone(void) const
{
	return (new Ice());	
}

std::string	convertToTypeStr(std::string s)
{
	std::string	ret;

	ret = s;
	ret[0] = tolower(ret[0]);
	return (ret);
}