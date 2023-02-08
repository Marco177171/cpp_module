/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:02:11 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 14:20:38 by masebast         ###   ########.fr       */
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
		~Form(void);
		Form &operator=(const Form &source);
		const std::string getName(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;
		void beSigned(Bureaucrat &bureau);
		bool isValid(void);
		bool getSigned(void);
	private:
		bool _isSigned;
		std::string const _name;
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