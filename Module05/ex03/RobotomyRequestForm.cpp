/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:42:04 by masebast          #+#    #+#             */
/*   Updated: 2023/02/09 16:55:45 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Default Robotomy Request Form", "Def Robot Form Target", 72, 45)
{
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const name) : Form(name, "Name Robot Form Target", 72, 45)
{
	std::cout << "Name Robotomy Request Form constructor called" << std::endl;
}
 
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &source) : Form(source.getName(), source.getTarget(), source.getGradeToSign(), source.getGradeToExecute())
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