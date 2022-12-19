/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:13:09 by masebast          #+#    #+#             */
/*   Updated: 2022/12/09 17:15:34 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	int	index;

	index = FirstName;
	while (index <= DarkestSecret)
		this->_info[index++] = std::string();
}

Contact::~Contact(void)
{}

std::string Contact::_field_name[5] = {
	"First Name",
	"Last Name",
	"Nick Name",
	"Phone Number",
	"Darkest Secret"
};

void Contact::clean_contacts()
{
	int word_index;
	int char_index;

	word_index = 0;
	while (word_index < 5)
	{
		char_index = 0;
		while (this->_info[word_index][char_index])
			this->_info[word_index][char_index++] = ' ';
		word_index++;
	}
}

bool Contact::insertInfo(int index)
{
	int info_index;

	info_index = FirstName;
	this->_index = index;
	while (info_index <= DarkestSecret)
	{
		std::cout << "\t# " << Contact::_field_name[info_index] << ": ";
		std::getline(std::cin, this->_info[info_index]);
		if (this->_info[info_index].length() == 0)
		{
			this->clean_contacts();
			std::cout << "No empty fields permitted. Aborting\n";
			return (false);
		}
		else if (info_index == PhoneNumber && !isNumber(this->_info[info_index]))
		{
			this->clean_contacts();
			std::cout << "Error: Phone number is not numeric. Aborting\n";
			return (false);
		}
		info_index++;
	}
	std::cout << "Contact added in phonebook\n";
	return (true);
}

std::string Contact::getPortion(int index)
{
	std::string portion;

	if (this->_info[index].length() > 10)
	{
		portion = this->_info[index].substr(0, 9);
		portion += ".";
	}
	else
	{
		while (portion.length() + this->_info[index].length() < 10)
			portion += " ";
		portion += this->_info[index];
	}
	return (portion);
}

int Contact::getIndex(void)
{
	return (this->_index + 1);
}

static bool empty(std::string s)
{
	int index;

	index = 0;
	while (s[index])
	{
		if (s[index] != '!')
			return (false);
		index++;
	}
	return (true);
}

bool Contact::exists(void)
{
	if (this->_info[0].length() > 0 && !empty(this->_info[0]))
		return (true);
	return (false);
}

bool isNumber(std::string s)
{
	int index;

	index = 0;
	while (s[index])
	{
		if (!isdigit(s[index]))
			return (false);
		index++;
	}
	return (true);
}

