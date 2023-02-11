/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:15:21 by masebast          #+#    #+#             */
/*   Updated: 2023/02/11 12:44:02 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int error(std::string err)
{
	std::cout << err << std::endl;
	return (1);
}

int main()
{
	Data data(5);
	uintptr_t serialized;

	// if (argc != 2)
	// 	return (error("Error: I need exactly one argument"));
	serialized = serialize(&data);
	deserialize(serialized);
	return (0);
}