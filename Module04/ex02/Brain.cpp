/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:47:04 by masebast          #+#    #+#             */
/*   Updated: 2023/01/30 16:55:16 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain &source)
{
	int index;

	index = 0;
	while (index < 100)
	{
		this->_ideas[index] = source.getIdea(index);
		index++;
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(Brain &source)
{
	int index;

	index = 0;
	while (index < 100)
	{
		this->_ideas[index] = source.getIdea(index);
		index++;
	}
	std::cout << "Brain operator constructor called" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int index)
{
	return (this->_ideas[index]);
}

void Brain::setIdea(std::string idea, int index)
{
	this->_ideas[index] = idea;
}