/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:16:56 by masebast          #+#    #+#             */
/*   Updated: 2023/02/10 16:51:15 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int error(std::string const err)
{
	std::cerr << err << std::endl;
	return (1);
}

static const char* checkInfOrNan(std::string const str)
{
	static const char* types[4] = {
		"inf",
		"+inf",
		"-inf",
		"nan"
	};
	for (int i = 0; i < 4; i++)
	{
		if (!str.compare(types[i]))
			return (types[i]);
	}
	return (NULL);
}

int InfOrNanConversion(const char* nToConvert)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << nToConvert << "f" << std::endl;
	std::cout << "double: " << nToConvert << std::endl;
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (error("Error: I have to take exactly one argument"));
	if (checkInfOrNan(argv[1]))
		return (InfOrNanConversion(checkInfOrNan(argv[1])));
	return (0);
}