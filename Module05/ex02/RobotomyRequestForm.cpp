/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:42:04 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 16:58:10 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : _name("Default Robotomy Request Form"), _gradeToExecute(45), _gradeToSign(72)
{
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const name) : _name(name), _gradeToExecute(45), _gradeToSign(72)
{
	std::cout << "Name Robotomy Request Form constructor called" << std::endl;
}
 
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &source) : _name(source._name), _gradeToExecute(source._gradeToExecute), _gradeToSign(source._gradeToSign)
{
	std::cout << "Operator constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &source)
{
	*this = source;
	std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}