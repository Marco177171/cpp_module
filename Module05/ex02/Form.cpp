/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:02:06 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 14:33:56 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default Form"), _gradeToSign(100), _gradeToExecute(100)
{
	this->_isSigned = false;
}

Form::Form(int gradeToSign) : _name("Defined Grade Form"), _gradeToSign(gradeToSign), _gradeToExecute(100)
{
	this->_isSigned = false;
	if (this->_gradeToSign > 150)
		throw GradeTooLowException();
	if (this->_gradeToSign < 1)
		throw GradeTooHighException();
}

Form::Form(std::string const name) : _name(name), _gradeToSign(100), _gradeToExecute(100)
{
	std::cout << "Defined Name Form" << std::endl;
	this->_isSigned = false;
}

Form::Form(std::string const name, int gradeToSign) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(100)
{
	this->_isSigned = false;
	if (this->_gradeToSign > 150)
		throw GradeTooLowException();
	if (this->_gradeToSign < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &source) : _name(source._name), _gradeToSign(source._gradeToSign), _gradeToExecute(100)
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

int Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

bool Form::getSigned(void)
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
		std::cout << bureau.getName() << " couldn't sign the form because his grade is too low" << std::endl;
	else if (this->getSigned() == true)
		std::cout << bureau.getName() << " couldn't sign the form because it is already signed" << std::endl;
	else
	{
		this->_isSigned = true;
		std::cout << bureau.getName() << " signed " << this->_name << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Form const &toStream)
{
	out << toStream.getName() << ", Form grade to sign: " << toStream.getGradeToSign() << " | Forma grade to execute: " << toStream.getGradeToExecute() << std::endl;
	return (out);
}