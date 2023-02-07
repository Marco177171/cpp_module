/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:39:29 by masebast          #+#    #+#             */
/*   Updated: 2023/02/07 17:56:05 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(int grade);
		Bureaucrat(std::string const name);
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &source);
		~Bureaucrat(void);
		Bureaucrat &operator=(const Bureaucrat &source);
		std::string getName(void) const;
		int getGrade(void) const;
		void increase(void);
		void decrease(void);
		bool isValid(void);
		void signForm(Form &form);
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Bureaucrat Exception: grade too low");
				}
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Bureaucrat Exception: grade too high");
				}
		};
	private:
		std::string const _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &toStream);

#endif