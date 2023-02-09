/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:43:42 by masebast          #+#    #+#             */
/*   Updated: 2023/02/09 18:43:49 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

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

Form *Intern::makeForm(std::string name, std::string target)
{
	Form *result;
	
	result = new Form(name, target);
	std::cout << "Intern created the form " << result->getName() << " targeting " << result->getTarget() << std::endl;
	return (result);
}