/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:49:15 by masebast          #+#    #+#             */
/*   Updated: 2023/02/14 13:24:33 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::list<int> array;
	std::vector<int> arrayOne;
	
	array.push_back(10);
	array.push_back(10);
	array.push_back(10);
	array.push_back(10);
	array.push_back(5);
	array.push_back(10);
	array.push_back(10);
	try
	{
		std::cout << *(::easyfind(array, 5)) << std::endl;
		std::cout << *(::easyfind(array, 10)) << std::endl;
		std::cout << *(::easyfind(array, -1)) << std::endl;
	}
	catch(ElementNotFound &e)
	{
		std::cerr << e.what() << std::endl;
	}
	arrayOne.push_back(10);
	arrayOne.push_back(10);
	arrayOne.push_back(10);
	arrayOne.push_back(10);
	arrayOne.push_back(5);
	arrayOne.push_back(10);
	arrayOne.push_back(10);
	try
	{
		std::cout << *(::easyfind(array, 5)) << std::endl;
		std::cout << *(::easyfind(array, 10)) << std::endl;
		std::cout << *(::easyfind(array, -1)) << std::endl;
	}
	catch(ElementNotFound &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}