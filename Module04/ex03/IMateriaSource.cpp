/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:49:04 by masebast          #+#    #+#             */
/*   Updated: 2023/01/31 22:08:57 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
	std::cout << "Default IMateriaSource constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &src)
{
	*this = src;
	std::cout << "IMateriaSource copy constructor called" << std::endl;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &src)
{
	std::cout << "IMateriaSource overload constructor called" << std::endl;
	return (*this);
}

IMateriaSource::~IMateriaSource(void)
{
	std::cout << "IMateriaSource destructor called" << std::endl;
}