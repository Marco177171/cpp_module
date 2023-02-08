/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:42:12 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 16:58:37 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : _name("Default Shrubbery Creation Form"), _gradeToExecute(137), _gradeToSign(145)
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const name) : _name(name), _gradeToExecute(137), _gradeToSign(145)
{
	std::cout << "Name Shrubbery Creation Form constructor called" << std::endl;
}
 
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &source) : _name(source._name), _gradeToExecute(source._gradeToExecute), _gradeToSign(source._gradeToSign)
{
	std::cout << "Operator constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &source)
{
	*this = source;
	std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}