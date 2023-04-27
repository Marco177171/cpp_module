/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:04:21 by masebast          #+#    #+#             */
/*   Updated: 2023/04/27 19:02:35 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn.hpp"

int ft_error(std::string str)
{
	std::cerr << str << std::endl;
	return (1);
}

int checkArgs(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] != '+' && argv[i] != '-' && argv[i] != '/' && argv[i] != '(' &&
			argv[i] != ')' && argv[i] != ' ' && argv[i] != '*' && !isnumber(argv[i]))
			return (1);
		i++;
	}
	return (0);
}

int parse(char *argv)
{
	(void)argv;
	std::cout << "parsing.." << std::endl;
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (ft_error("ERROR: argument"));
	if (checkArgs(argv[1]))
		return (ft_error("ERROR: invalid arguments"));
	parse(argv[1]);
	return (0);
}