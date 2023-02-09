/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:02:11 by masebast          #+#    #+#             */
/*   Updated: 2023/02/09 16:50:16 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form {
	public:
		Form(void);
		Form(int const gradeToSign);
		Form(std::string const name);
		Form(std::string const name, std::string const target);
		Form(std::string const name, std::string const target, int const gradeToSign, int const gradeToExecute);
		Form(const Form &source);
		virtual ~Form(void);
		Form &operator=(const Form &source);
		const std::string getName(void) const;
		void setName(std::string name);
		const std::string getTarget(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;
		void beSigned(Bureaucrat &bureau);
		void execute(Bureaucrat const &executor) const;
		bool isValid(void);
		bool getSigned(void) const;
	private:
		bool _isSigned;
		std::string const _name;
		std::string const _target;
		int const _gradeToSign;
		int const _gradeToExecute;
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Form Exception: grade too low");
				}
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Form Exception: grade too high");
				}
		};
};

std::ostream &operator<<(std::ostream &out, Form const &toStream);

#endif