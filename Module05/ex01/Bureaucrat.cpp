/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:39:20 by masebast          #+#    #+#             */
/*   Updated: 2023/02/07 17:57:47 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default Bureaucrat"), _grade(100)
{}

Bureaucrat::Bureaucrat(int grade) : _name("Grade Bureaucrat")
{
	this->_grade = grade;
	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(std::string const name) : _name(name)
{
	this->_grade = 100;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade)
{
	this->_grade = grade;
	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &source) : _name(source._name), _grade(source._grade)
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &source)
{
	this->_grade = source._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->_name << " destructor called" << std::endl;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::increase(void)
{
	this->_grade--;
	std::cout << this->_name << "'s grade decreased. New Grade: " << this->_grade << std::endl;
	if (!this->isValid())
	{
		throw GradeTooHighException();
		this->~Bureaucrat();
	}
}

void Bureaucrat::decrease(void)
{
	this->_grade++;
	std::cout << this->_name << "'s grade decreased. New Grade: " << this->_grade << std::endl;
	if (!this->isValid())
	{
		throw GradeTooLowException();
		this->~Bureaucrat();
	}
}

bool Bureaucrat::isValid(void)
{
	if (this->_grade > 150 || this->_grade < 1)
		return (false);
	return (true);
}

void Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &toStream)
{
	out << toStream.getName() << ", bureaucrat grade " << toStream.getGrade() << std::endl;
	return (out);
}