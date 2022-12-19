/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:12:54 by masebast          #+#    #+#             */
/*   Updated: 2022/12/09 17:12:55 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

Phonebook::Phonebook() : _older(0)
{}

Phonebook::~Phonebook()
{}

void Phonebook::add_contact(void)
{
	if (_contacts[this->_older].insertInfo(_older))
		this->_older = (this->_older + 1) % 8;
}

void Phonebook::display(void)
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = -1;
		while (j < 5)
		{
			if (j == -1 && _contacts[i].exists())
				std::cout << _contacts[i].getIndex() << " | ";
			else if (j == -1 && !_contacts[i].exists())
				std::cout << " | ";
			else
				std::cout << _contacts[i].getPortion(j) << " | ";
			j++;
		}
		std::cout << "\n";
		i++;
	}
}

