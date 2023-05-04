/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:04:50 by masebast          #+#    #+#             */
/*   Updated: 2023/05/04 12:51:30 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int fillDeque(std::deque<int> *mergeTarget, char *argv[])
{
	int index;

	index = 0;
	std::cout << "Before: ";
	while (argv[index])
	{
		std::cout << argv[index] << " ";
		mergeTarget->push_back(std::atoi(argv[index]));
		index++;
	}
	std::cout << std::endl;
	return (0);
}

int insertionSortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end)
{
	std::deque<int>::iterator i;
	std::deque<int>::iterator j;
	
	i = begin;
	while (i != end)
	{
		j = i;
		while (j != begin && *j < *(std::prev(j)))
		{
			std::iter_swap(j, std::prev(j));
			j--;
		}
		i++;
	}
	return (0);
}

int mergeInsertSortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end)
{
	std::deque<int>::iterator middle;

	if (std::distance(begin, end) <= 10)
		insertionSortDeque(begin, end);
	else
	{
		middle = begin;
		std::advance(middle, std::distance(begin, end) / 2);
		mergeInsertSortDeque(begin, middle);
		mergeInsertSortDeque(middle, end);
		std::inplace_merge(begin, middle, end);
	}
	return (0);
}

int printDequeResult(std::deque<int> *mergeTarget)
{
	std::deque<int>::iterator iter;

	iter = mergeTarget->begin();
	std::cout << "After (deque) : ";
	while (iter != mergeTarget->end())
	{
		std::cout << *iter << " ";
		iter++;
	}
	std::cout << std::endl;
	return (0);
}