/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:56:49 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 16:58:51 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat bureau;
	Bureaucrat lowGradeBureau(140);
	Form form;
	Form highForm(10);
	ShrubberyCreationForm shrub;
	RobotomyRequestForm robot;
	PresidentialPardonForm president;

	
	bureau.signForm(form);
	bureau.signForm(form);
	bureau.signForm(highForm);
	lowGradeBureau.executeForm(shrub);
	lowGradeBureau.executeForm(robot);
	lowGradeBureau.executeForm(president);
	return (0);
}