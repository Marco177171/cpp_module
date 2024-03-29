/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:02:06 by masebast          #+#    #+#             */
/*   Updated: 2023/02/09 16:54:07 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default Form"), _target("Default Form Target"), _gradeToSign(100), _gradeToExecute(100)
{
	this->_isSigned = false;
}

Form::Form(int const gradeToSign) : _name("Defined Grade Form"), _target("Defined Grade Form Target"), _gradeToSign(gradeToSign), _gradeToExecute(100)
{
	this->_isSigned = false;
}
		
Form::Form(std::string const name) : _name(name), _target("Name Form Target"), _gradeToSign(100), _gradeToExecute(100)
{
	this->_isSigned = false;
}

Form::Form(std::string const name, std::string const target) : _name(name), _target(target), _gradeToSign(100), _gradeToExecute(100)
{
	this->_isSigned = false;
}

Form::Form(std::string const name, std::string const target, int const gradeToSign, int const gradeToExecute) : _name(name), _target(target), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	this->_isSigned = false;
}

Form::Form(const Form &source) : _name(source._name), _target(source._target), _gradeToSign(source._gradeToSign), _gradeToExecute(100)
{
	std::cout << "Copy Form constructor called" << std::endl;
	this->_isSigned = false;
}

Form &Form::operator=(const Form &source)
{
	if (this == &source)
		return (*this);
	this->_isSigned = false;
	return (*this);
}

Form::~Form(void)
{
	std::cout << this->_name << " destructor called" << std::endl;
}

const std::string Form::getName(void) const
{
	return (this->_name);
}

const std::string Form::getTarget(void) const
{
	return (this->_target);
}

int Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

bool Form::getSigned(void) const
{
	return (this->_isSigned);
}

bool Form::isValid(void)
{
	if (this->_gradeToSign > 150 || this->_gradeToSign < 1
		|| this->_gradeToExecute > 150 || this->_gradeToExecute < 1)
		return (false);
	return (true);
}

void Form::beSigned(Bureaucrat &bureau)
{
	if (bureau.getGrade() > this->_gradeToSign)
		std::cout << bureau.getName() << " couldn't sign " << this->_name << " because his grade is too low" << std::endl;
	else if (this->getSigned() == true)
		std::cout << bureau.getName() << " couldn't sign " << this->_name << " because it is already signed" << std::endl;
	else
	{
		this->_isSigned = true;
		std::cout << bureau.getName() << " signed " << this->_name << std::endl;
	}
}

void Form::execute(Bureaucrat const &executor) const
{
	std::cout << executor.getName() << " executed " << this->_name << std::endl;
}

std::ostream &operator<<(std::ostream &out, Form const &toStream)
{
	out << toStream.getName() << ", Form grade to sign: " << toStream.getGradeToSign() << " | Forma grade to execute: " << toStream.getGradeToExecute() << std::endl;
	return (out);
}