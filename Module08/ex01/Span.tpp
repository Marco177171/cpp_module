/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:30:13 by masebast          #+#    #+#             */
/*   Updated: 2023/02/15 17:25:00 by masebast         ###   ########.fr       */
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
	this->_span = source._span;
}

Span &Span::operator=(Span const &source)
{
	this->_max = source._max;
	this->_span.reserve(this->_max);
	this->_span = source._span;
	std::cout << "Span operator overload constructor called" << std::endl;
	return (*this);
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(int number)
{
	if (this->_span.size() == this->_max)
		throw Span::alreadyFilled();
	this->_span.push_back(number);
}

unsigned int Span::shortestSpan(void)
{
	std::vector<int> copy;
	std::vector<int>::iterator iter;
	int result;

	if (!this->_span.size())
		throw Span::emptySpan();
	else if (this->_span.size() == 1)
		throw Span::oneInSpan();
	copy = this->_span;
	std::sort(copy.begin(), copy.end());
	iter = copy.begin();
	result = *(copy.end() - 1) - *copy.begin();
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
	int result;

	if (!this->_span.size())
		throw Span::emptySpan();
	else if (this->_span.size() == 1)
		throw Span::oneInSpan();
	copy = this->_span;
	std::sort(copy.begin(), copy.end());
	result = *(copy.end() - 1) - *copy.begin();
	return (result);
}

void Span::randomAdding()
{
	std::vector<int> temp;
	
	temp.reserve(1000000);
	srand(unsigned (time(NULL)));
	for (int i = 0; i < 1000000; i++)
		temp.push_back(rand() % 1000000);
	if (this->_span.size() + std::distance(temp.begin(), temp.end()) > this->_max)
		throw Span::alreadyFilled();
	this->_span.insert(this->_span.begin(), temp.begin(), temp.end());
}

std::vector<int> &Span::getVector()
{
	return (this->_span);
}