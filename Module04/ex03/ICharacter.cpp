/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:13:44 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 22:08:36 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	std::cout << "Default ICharacter constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &src)
{
	*this = src;
	std::cout << "ICharacter copy constructor called" << std::endl;
}

ICharacter &ICharacter::operator=(const ICharacter &src)
{
	std::cout << "ICharacter overload constructor called" << std::endl;
	return (*this);
}

ICharacter::~ICharacter(void)
{
	std::cout << "ICharacter destructor called" << std::endl;
}