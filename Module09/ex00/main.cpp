/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:10:19 by masebast          #+#    #+#             */
/*   Updated: 2023/04/27 16:07:35 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int ft_error(std::string error)
{
	std::cerr << error << std::endl;
	return (1);
}

int fillDataMap(btc *BitExchange, char const *data)
{
	std::ifstream file(data);
	std::string line, date, value;
	
	if (!file)
		return (ft_error("ERROR: issues opening file."));
	if (getline(file, line, '\n') && !line.compare("date,exchange_rate") && line.length() == 18)
	{
		while (getline(file, line, '\n'))
		{
			if (line.find_last_not_of("0123456789-,.") != std::string::npos)
				return (ft_error("ERROR: bad character found in data.csv"));
			else
			{
				std::string::size_type pos = line.find(',');
				date = line.substr(0, pos);
				value = line.substr(pos + 1);
				BitExchange->map_data.insert(std::pair<std::string, std::string>(date, value));
			}
		}
	}
	else
	{
		file.close();
		return (ft_error("ERROR: file content corrupt."));
	}
	file.close();
	return (0);
}

int fillInputMap(std::string arg, std::map<std::string, std::string> *inputMap)
{
	std::ifstream input(arg);
	std::string line, date, value;
	
	if (!input)
		return (ft_error("ERROR: issues opening input file."));
	if (getline(input, line, '\n') && !line.compare("date | value") && line.length() == 12)
	{
		while (getline(input, line, '\n'))
		{
			if (line.find_last_not_of("0123456789|-. ") != std::string::npos)
				return (ft_error("ERROR: bad character found in input"));
			else
			{
				// KEEP CHECKING HERE!!!
				std::string::size_type pos = line.find(' ');
				date = line.substr(0, pos); // left side (date)
				if (line.substr(pos + 1).c_str()[0] != '\0' && line.substr(pos + 1).c_str()[0] != '\n')
				{
					if (line.substr(pos + 1).find_last_not_of("0123456789|-. ") != std::string::npos)
						return (ft_error("ERROR: bad character found in input"));
					else
						value = line.substr(pos + 3); // right side (value)
				}
				else
					std::cerr << "ERROR: bad input => " << date << std::endl;
				inputMap->insert(std::pair<std::string, std::string>(date, value));
			}
		}
	}
	else
	{
		input.close();
		return (ft_error("ERROR: input content corrupt."));
	}
	input.close();
	return (0);	
}

int checkDoubles(double inputDouble)
{
	if (inputDouble > 1000)
	{
		std::cerr << "ERROR: too large a number." << std::endl;
		return (1);
	}
	else if (inputDouble < 0)
	{
		std::cerr << "ERROR: not a positive number." << std::endl;
		return (1);
	}
	return (0);
}

int result(btc *BitExchange, std::map<std::string, std::string> *inputMap)
{
	std::map<std::string, std::string>::iterator bitIter = BitExchange->map_data.begin();
	std::map<std::string, std::string>::iterator inputIter = inputMap->begin();
	double bitDouble, inputDouble;
	int check;

	check = 0;
	while (inputIter != inputMap->end())
	{
		bitIter = BitExchange->map_data.begin();
		while (bitIter != BitExchange->map_data.end())
		{
			if (!inputIter->first.compare(bitIter->first) || inputIter->first.compare(bitIter->first) < 0)
			{
				if (inputIter->first.compare(bitIter->first) < 0)
				{
					bitIter--;
					bitDouble = std::strtod(bitIter->second.c_str(), NULL);
					inputDouble = std::strtod(inputIter->second.c_str(), NULL);
				}
				// KEEP CHECKING HERE!!!
				else
				{
					bitDouble = std::strtod(bitIter->second.c_str(), NULL);
					inputDouble = std::strtod(inputIter->second.c_str(), NULL);
				}
				check = checkDoubles(inputDouble);
				if (check == 0)
					std::cout << inputIter->first << " => " << inputIter->second << " => " << bitDouble * inputDouble << std::endl;
				break;
			}
			bitIter++;
		}
		inputIter++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	btc BitExchange;
	std::map<std::string, std::string> inputMap;

	if (argc != 2)
		return (ft_error("ERROR: the program could not open file."));
	if (fillDataMap(&BitExchange, "./data.csv"))
		return (1);
	fillInputMap(argv[1], &inputMap);
	result(&BitExchange, &inputMap);
	return (0);
}