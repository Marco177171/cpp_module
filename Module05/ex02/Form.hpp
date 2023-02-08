/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:02:11 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 19:28:37 by masebast         ###   ########.fr       */
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
		Form(int const grade);
		Form(std::string const name);
		Form(std::string const name, int const grade);
		Form(const Form &source);
		virtual ~Form(void);
		Form &operator=(const Form &source);
		const std::string getName(void) const;
		void setName(std::string name);
		const std::string getTarget(void) const;
		void setTarget(std::string const target) const;
		int getGradeToSign(void) const;
		void setGradeToSign(int gradeToSign) const;
		int getGradeToExecute(void) const;
		void setGradeToExecute(int gradeToExecute) const;
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