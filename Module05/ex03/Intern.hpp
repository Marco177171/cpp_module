/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:43:48 by masebast          #+#    #+#             */
/*   Updated: 2023/02/09 18:32:45 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"

std::string const _forms[3] = {
	"ShrubberyCreationForm",
	"RobotomyRequestForm",
	"PresidentialPardonForm"
};

class Intern {
	public:
		Intern(void);
		Intern(Intern const &source);
		Intern(int const index, int const nForm);
		Intern &operator=(Intern const &source);
		~Intern(void);
		int getNForms(void) const;
		int getIndex(void) const;
		Form *makeForm(std::string formName, std::string formTarget);
	private:
		int const _nForms;
		int const _index;
		static std::string const _forms[3];
};

#endif