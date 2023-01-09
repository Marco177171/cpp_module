/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:58:27 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:58:47 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int ft_error(std::string error)
{
	std::cout << error << std::endl;
	return (1);
}

void HarlFilter(std::string level, Harl *harl)
{
	int type;

	type = 0;
	if (level.compare("debug"))
		type = 1;
	else if (level.compare("info"))
		type = 2;
	else if (level.compare("warning") == 1)
		type = 3;
	else if (level.compare("error"))
		type = 4;
	switch (type)
	{
		case (1):
			harl->complain(level);
			break ;
		case (2):
			harl->complain(level);
			break ;
		case (3):
			harl->complain(level);
			break ;
		case (4):
			harl->complain(level);
			break ;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
			break ;
	}
}

int main(int argc, char *argv[])
{
	std::string level;
	Harl *harl = new Harl();

	if (argc != 2)
		return (ft_error("Error: arguments must be exactly two"));
	level = argv[1];
	HarlFilter(level, harl);
	delete harl;
	return (0);
}