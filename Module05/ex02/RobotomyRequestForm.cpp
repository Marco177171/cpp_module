/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:42:04 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 18:13:11 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : _name("Default Robotomy Request Form"), _target("Def Robot Form Target"), _gradeToSign(72), _gradeToExecute(45)
{
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const name) : _name(name), _target("Name Robot Form Target"), _gradeToSign(72), _gradeToExecute(45)
{
	std::cout << "Name Robotomy Request Form constructor called" << std::endl;
}
 
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &source) : _name(source._name), _target(source._target), _gradeToSign(source._gradeToSign), _gradeToExecute(source._gradeToExecute)
{
	std::cout << "Operator constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &source)
{
	if (this != &source)
		return (*new(this) RobotomyRequestForm(source));
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}