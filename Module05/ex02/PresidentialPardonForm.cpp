/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:41:48 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 16:45:31 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : _name("Default Presidential Pardon Form"), _gradeToExecute(5), _gradeToSign(25)
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const name) : _name(name), _gradeToExecute(5), _gradeToSign(25)
{
	std::cout << "Name Presidential Pardon Form constructor called" << std::endl;
}
 
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &source) : _name(source.getName()), _gradeToExecute(source.getGradeToExecute()), _gradeToSign(source.getGradeToSign())
{
	std::cout << "Operator constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &source)
{
	*this = source;
	std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}