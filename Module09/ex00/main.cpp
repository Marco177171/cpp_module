/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:10:19 by masebast          #+#    #+#             */
/*   Updated: 2023/04/26 16:09:19 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int ft_error(std::string error)
{
	std::cerr << error << std::endl;
	return (1);
}

int check_data(btc *BitExchange, char const *data)
{
	std::ifstream file(data);
	std::string line;
	std::string date;
	double value;

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
				date = line.find_first_not_of("0123456789-");
				value = line.find_first_of(",");
				BitExchange->map_data.insert(date, value);
			}
		}
	}
	else
	{
		file.close();
		return (ft_error("ERROR: file content corrupt."));
	}
	return (0);
}

int main(int argc, char *argv[])
{
	btc *BitExchange;
	(void)argv;

	if (argc != 2)
		return (ft_error("ERROR: the program could not open file."));
	check_data(BitExchange, "./data.csv");
	return (0);
}