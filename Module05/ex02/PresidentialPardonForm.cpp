/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:41:48 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 17:47:42 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : _name("Default Presidential Pardon Form"), _gradeToSign(25), _gradeToExecute(5)
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const name) : _name(name), _gradeToSign(25), _gradeToExecute(5)
{
	std::cout << "Name Presidential Pardon Form constructor called" << std::endl;
}
 
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &source) : _name(source.getName()), _gradeToSign(source.getGradeToSign()), _gradeToExecute(source.getGradeToExecute())
{
	std::cout << "Operator constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &source)
{
	if (this != &source)
		return (*new(this) PresidentialPardonForm(source));
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}