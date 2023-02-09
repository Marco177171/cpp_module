/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:41:48 by masebast          #+#    #+#             */
/*   Updated: 2023/02/09 16:31:18 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Default Presidential Pardon Form", "Def Pres Form Target", 25, 5)
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const name) : Form(name, "Name Pres Form target", 25, 5)
{
	std::cout << "Name Presidential Pardon Form constructor called" << std::endl;
}
 
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &source) : Form(source.getName(), source.getTarget(), source.getGradeToSign(), source.getGradeToExecute())
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