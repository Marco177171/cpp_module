/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:43:42 by masebast          #+#    #+#             */
/*   Updated: 2023/02/10 15:28:29 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

std::string const Intern::_forms[3] = {
	"Shrubbery Creation Form",
	"Robotomy Request Form",
	"Presidential Pardon Form"
};

Intern::Intern(void) : _nForms(3), _index(0)
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(Intern const &source) : _nForms(source._nForms), _index(source._index)
{
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::Intern(int const index, int const nForm) : _nForms(nForm), _index(index)
{
	std::cout << "daje" << std::endl;
}

Intern &Intern::operator=(Intern const &source)
{
	Intern *result;
	result = new Intern(source.getIndex(), source.getNForms());
	std::cout << "Intern operator overload constructor called" << std::endl;
	return (*result);
}

Intern::~Intern(void)
{
	std::cout << "Intern destruction called" << std::endl;
}

int Intern::getNForms(void) const
{
	return (this->_nForms);
}

int Intern::getIndex(void) const
{
	return (this->_index);
}

void Intern::searchForm(std::string name)
{
	for (int i = 0; i < this->_nForms; i++)
	{
		if (name.compare(this->_forms[i]) == false)
		{
			this->_index = i;
			return ;
		}
	}
	throw (Intern::NoExistingForm());
}

Form *Intern::makeForm(std::string name, std::string target)
{
	try
	{
		this->searchForm(name);
		switch (this->_index)
		{
			case 0:
			{
				std::cout << "Intern creates Shrubbery Creation Form targeting " << target << std::endl;
				return (new ShrubberyCreationForm(target));
			}
			case 1:
			{
				std::cout << "Intern creates Presidential Pardon Form targeting " << target << std::endl;
				return (new PresidentialPardonForm(target));
			}
			case 2:
			{
				std::cout << "Intern creates Robotomy Request Form targeting " << target << std::endl;
				return (new RobotomyRequestForm(target));
			}
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (NULL);
}