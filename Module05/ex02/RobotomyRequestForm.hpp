/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:42:10 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 17:31:09 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm {
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const name);
		RobotomyRequestForm(const RobotomyRequestForm &source);
		~RobotomyRequestForm(void);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &source);
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("RobotomyRequestForm Exception: grade too low");
				}
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("RobotomyRequestForm Exception: grade too high");
				}
		};
	private:
		std::string const _name;
		int const _gradeToSign;
		int const _gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &toStream);

#endif