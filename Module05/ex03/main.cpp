/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:56:49 by masebast          #+#    #+#             */
/*   Updated: 2023/02/10 15:34:55 by masebast         ###   ########.fr       */
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
	Form* rrf;
	Form* president;
	Form* shrubbery;
	Form* notValid;
	Form* copy1;
	Form* copy2;
	Form* copy3;

	std::cout << "-- DECLARATIONS GONE. FORMS CREATIONS: --" << std::endl;
	rrf = someRandomIntern.makeForm("Robotomy Request Form", "Bender");
	notValid = someRandomIntern.makeForm("fantasy form", "Giovanni");
	president = someRandomIntern.makeForm("Presidential Pardon Form", "Francesco");
	shrubbery = someRandomIntern.makeForm("Shrubbery Creation Form", "Paolo");

	Intern copy = someRandomIntern;
	copy1 = copy.makeForm("fantasy form", "Giovanni");
	copy2 = copy.makeForm("Presidential Pardon Form", "Francesco");
	copy3 = copy.makeForm("Shrubbery Creation Form", "Paolo");

	std::cout << "-- FREE MEMORY: --" << std::endl;
	delete (rrf);
	delete (president);
	delete (shrubbery);
	delete (copy1);
	delete (copy2);
	delete (copy3);

	return (0);
}