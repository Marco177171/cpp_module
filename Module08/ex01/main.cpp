/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:30:07 by masebast          #+#    #+#             */
/*   Updated: 2023/02/15 17:18:08 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	std::cout << "--- MANDATORY MAIN ---" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "--- PERSONAL MAIN ---" << std::endl;
	Span span(10);

	span.addNumber(2);
	Span copy = span;
	std::cout << copy.getVector().at(0) << std::endl;
	std::cout << *(copy.getVector().begin()) << std::endl;
	std::cout << *(span.getVector().begin()) << std::endl;
	copy.getVector().at(0) = 0;
	std::cout << *copy.getVector().begin() << std::endl;
	std::cout << *span.getVector().begin() << std::endl;
	std::cout << copy.getVector().size() << std::endl;
	std::cout << span.getVector().size() << std::endl;
	span.getVector().push_back(150);
	std::cout << span.getVector().size() << std::endl;
	try
	{
		span.addNumber(42);
		span.addNumber(24);
		span.addNumber(17);
		span.addNumber(38);
		span.addNumber(122);
		span.addNumber(77);
		span.addNumber(96);
		span.addNumber(68);
		// not inserted //
		span.addNumber(81);
		span.addNumber(83);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Shortest Span in span is " << span.shortestSpan() << std::endl;
	std::cout << "Longest Span in span is " << span.longestSpan() << std::endl;
	try
	{
		std::cout << "Longest Span in copy is " << copy.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	Span crazy(1000000);
	crazy.randomAdding();
	std::cout << "Shortest Span in crazy is " << crazy.shortestSpan() << std::endl;
	std::cout << "Longest Span in crazy is " << crazy.longestSpan() << std::endl;
	return (0);
}