/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:56:49 by masebast          #+#    #+#             */
/*   Updated: 2023/02/09 18:49:40 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	Intern copy = someRandomIntern;
	Form* rrf;
	Form* president;
	Form* shrubbery;
	Form* notValid;
	Form* copy1;
	Form* copy2;
	Form* copy3;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	notValid = someRandomIntern.makeForm("fantasy form", "Giovanni");
	president = someRandomIntern.makeForm("Presidential Pardon form", "Francesco");
	shrubbery = someRandomIntern.makeForm("Shrubbery Request Form", "Paolo");

	copy1 = copy.makeForm("fantasy form", "Giovanni");
	copy2 = copy.makeForm("Presidential Pardon form", "Francesco");
	copy3 = copy.makeForm("Shrubbery Request Form", "Paolo");

	// delete &copy;
	return (0);
}