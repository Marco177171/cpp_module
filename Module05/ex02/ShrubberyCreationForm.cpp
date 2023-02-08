/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:42:12 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 17:46:17 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : _name("Default Shrubbery Creation Form"), _gradeToSign(145), _gradeToExecute(137)
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const name) : _name(name), _gradeToSign(145), _gradeToExecute(137)
{
	std::cout << "Name Shrubbery Creation Form constructor called" << std::endl;
}
 
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &source) : _name(source._name), _gradeToSign(source._gradeToSign), _gradeToExecute(source._gradeToExecute)
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