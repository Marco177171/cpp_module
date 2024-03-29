/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:15:21 by masebast          #+#    #+#             */
/*   Updated: 2023/02/11 14:25:52 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int error(std::string err)
{
	std::cout << err << std::endl;
	return (1);
}

int main(int argc, char *argv[])
{
	Data data;
	uintptr_t serialized;

	if (argc != 2)
		return (error("Error: I need exactly one argument"));
	data = Data(std::atoi(argv[1]));
	serialized = serialize(&data);
	deserialize(serialized);
	return (0);
}