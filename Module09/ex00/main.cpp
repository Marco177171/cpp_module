/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:10:19 by masebast          #+#    #+#             */
/*   Updated: 2023/04/26 17:29:41 by masebast         ###   ########.fr       */
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
				std::string::size_type pos = line.find(' ');
				date = line.substr(0, pos);
				value = line.substr(pos + 3);
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

int main(int argc, char *argv[])
{
	btc BitExchange;
	std::map<std::string, std::string> inputMap;

	if (argc != 2)
		return (ft_error("ERROR: the program could not open file."));
	fillDataMap(&BitExchange, "./data.csv");
	fillInputMap(argv[1], &inputMap);
	return (0);
}