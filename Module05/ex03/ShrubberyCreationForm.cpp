/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:42:12 by masebast          #+#    #+#             */
/*   Updated: 2023/02/09 16:40:47 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Default Shrubbery Creation Form", "Default Shrub Form Target", 145, 137)
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const name) : Form(name, "Name Shrub Target", 145, 137)
{
	std::cout << "Name Shrubbery Creation Form constructor called" << std::endl;
}
 
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &source) : Form(source.getName(), source.getTarget(), source.getGradeToSign(), source.getGradeToExecute())
{
	std::cout << "Operator constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &source)
{
	if (this != &source)
		return (*new(this) ShrubberyCreationForm(source));
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}