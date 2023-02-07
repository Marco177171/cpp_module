/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:56:49 by masebast          #+#    #+#             */
/*   Updated: 2023/02/06 20:17:34 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bureau;
	Bureaucrat copyOfBureau(bureau);
	Bureaucrat copyOfCopy = copyOfBureau;

	std::cout << "---DEFAULT BUREAUCRAT---" << std::endl;
	try
	{
		bureau.increase();
	}
	catch(const std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	try
	{
		bureau.decrease();
	}
	catch(const std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	std::cout << "---COPY BUREAUCRAT---" << std::endl;
	try
	{
		copyOfBureau.increase();
	}
	catch(const std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	try
	{
		copyOfBureau.decrease();
	}
	catch(const std::exception& exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	std::cout << "---OVERLOAD BUREAUCRAT---" << std::endl;
	try
	{
		copyOfCopy.increase();
	}
	catch(const std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	while (1)
	{
		try
		{
			copyOfCopy.decrease();
		}
		catch(const std::exception& exp)
		{
			std::cerr << exp.what() << std::endl;
			break ;
		}
	}
	std::cout << bureau.getName() << std::endl;
	std::cout << copyOfBureau.getName() << std::endl;
	std::cout << copyOfCopy.getName() << std::endl;
}