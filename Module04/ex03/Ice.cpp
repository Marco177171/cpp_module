/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:57:49 by masebast          #+#    #+#             */
/*   Updated: 2023/02/03 17:43:59 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(void) : AMateria("ice")
{}

Ice::Ice(const Ice &src) : AMateria(src.getType())
{}

Ice &Ice::operator=(const Ice &src)
{
	this->_type = src.getType();
	return (*this);
}

Ice::~Ice(void)
{}

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