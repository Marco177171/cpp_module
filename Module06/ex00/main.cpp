/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:16:56 by masebast          #+#    #+#             */
/*   Updated: 2023/02/10 17:48:36 by masebast         ###   ########.fr       */
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

int normalConversion(std::string str)
{
	double converted;

	if (std::isalpha(str[0]) && !str[1])
		converted = static_cast<char>(str[0]);
	else if (std::isalpha(str[0] && str[0]))
		return (error("Not a valid parameter"));
	else
		converted = std::strtold(str.c_str(), NULL);
	if (converted < CHAR_MIN || converted > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(converted))
		std::cout << "char: not displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(converted) << "'" << std::endl;
	if (converted < INT_MIN || converted > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(converted) << std::endl;
	if (converted < -FLT_MAX || converted > FLT_MAX)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(converted) << "f" << std::endl;
	if (converted < -DBL_MAX || converted > DBL_MAX)
		std::cout << "double: impossible" << std::endl;
	else if (std::isinf(converted))
		std::cout << "double: inf" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(converted) << std::endl;
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (error("Error: I have to take exactly one argument"));
	if (checkInfOrNan(argv[1]))
		return (InfOrNanConversion(checkInfOrNan(argv[1])));
	else
		return (normalConversion(argv[1]));
}