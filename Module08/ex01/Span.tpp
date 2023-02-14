/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:30:13 by masebast          #+#    #+#             */
/*   Updated: 2023/02/14 16:13:19 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max(10)
{
	this->_span.reserve(this->_max);
}

Span::Span(unsigned int max) : _max(max)
{
	this->_span.reserve(this->_max);
}

Span::Span(Span const &source) : _max(source._max)
{
	this->_span.reserve(this->_max);
}

Span &Span::operator=(Span const &source)
{
	this->_max = source._max;
	this->_span.reserve(this->_max);
	std::cout << "Span operator overload constructor called" << std::endl;
	return (*this);
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(int number)
{
	std::cout << "addNumber called" << std::endl;
}

unsigned int Span::shortestSpan(void)
{
	std::vector<int> copy;
	std::vector<int>::iterator iter;
	unsigned int result;

	std::cout << "shortestSpan called" << std::endl;
	if (!this->_span.size())
		throw Span::emptySpan();
	else if (this->_span.size() == 1)
		throw Span::oneInSpan();
	copy = this->_span;
	result = copy.end() - copy.begin() - 1;
	iter++;
	while (iter != copy.end())
	{
		if (*iter - *(iter - 1) < result)
			result = *iter - *(iter - 1);
		iter++;
	}
	return (result);
}

unsigned int Span::longestSpan(void)
{
	std::vector<int> copy;
	unsigned int result;

	std::cout << "longestSpan called" << std::endl;
	if (!this->_span.size())
		throw Span::emptySpan();
	else if (this->_span.size() == 1)
		throw Span::oneInSpan();
	copy = this->_span;
	result = *(copy.end() - 1) - *copy.begin();
	return (result);
}
