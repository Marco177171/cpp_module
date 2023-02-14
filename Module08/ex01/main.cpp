/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:30:07 by masebast          #+#    #+#             */
/*   Updated: 2023/02/14 17:21:00 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span span(10);

	span.addNumber(2);
	Span newSpan = span;
	std::cout << span.getVector().at(0) << std::endl;
	std::cout << *(span.getVector().begin()) << std::endl;
	std::cout << *(span.getVector().end()) << std::endl;
	span.getVector().at(0) = 0;
	std::cout << *span.getVector().begin() << std::endl;
	std::cout << *newSpan.getVector().begin() << std::endl;
	std::cout << *span.getVector().end() << std::endl;
	std::cout << *newSpan.getVector().end() << std::endl;
	newSpan.getVector().push_back(150);
	std::cout << newSpan.getVector().size() << std::endl;
	try
	{
		newSpan.addNumber(42);
		newSpan.addNumber(24);
		newSpan.addNumber(17);
		newSpan.addNumber(38);
		newSpan.addNumber(122);
		newSpan.addNumber(77);
		newSpan.addNumber(96);
		newSpan.addNumber(68);
		// not inserted //
		newSpan.addNumber(81);
		newSpan.addNumber(83);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
	std::cout << "Longest span: " << span.longestSpan() << std::endl;
	try
	{
		std::cout << "newSpan shortest: " << newSpan.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Span crazy(1000000);
	crazy.randomAdding();
	std::cout << "Shortest span in crazy: " << crazy.shortestSpan() << std::endl;
	std::cout << "Longest span in crazy: " << crazy.longestSpan() << std::endl;
	return (0);
}