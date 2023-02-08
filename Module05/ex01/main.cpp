/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:56:49 by masebast          #+#    #+#             */
/*   Updated: 2023/02/08 14:30:36 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bureau;
	Bureaucrat lowGradeBureau(140);
	Form form;
	Form highForm(10);
	
	bureau.signForm(form);
	bureau.signForm(form);
	bureau.signForm(highForm);
	return (0);
}