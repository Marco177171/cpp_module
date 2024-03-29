/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:42:10 by masebast          #+#    #+#             */
/*   Updated: 2023/02/09 16:54:59 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
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
};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &toStream);

#endif