/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:58:15 by masebast          #+#    #+#             */
/*   Updated: 2023/01/09 16:58:17 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int ft_error(std::string error)
{
	std::cout << error << std::endl;
	return (1);
}

int main(int argc, char *argv[])
{
	std::string level;
	Harl *harl = new Harl();

	if (argc != 2)
		return (ft_error("argument error. Appropriate syntax: ./Harl [level]"));
	level = argv[1];
	if (level != "debug" && level != "info" && level != "warning" && level != "error")
		return (ft_error("possible arguments: debug, info, warning, error"));
	harl->complain(level);
	delete harl;
	return (0);
}