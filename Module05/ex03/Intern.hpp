/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:43:48 by masebast          #+#    #+#             */
/*   Updated: 2023/02/10 15:28:01 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(Intern const &source);
		Intern(int const index, int const nForm);
		Intern &operator=(Intern const &source);
		~Intern(void);
		int getNForms(void) const;
		int getIndex(void) const;
		void searchForm(std::string name);
		Form *makeForm(std::string formName, std::string formTarget);
		class NoExistingForm : public std::exception
		{
			virtual const char * what() const throw()
			{
				return ("There are no forms names like that");
			}
		};
	private:
		int const _nForms;
		int _index;
		static std::string const _forms[3];
};

#endif