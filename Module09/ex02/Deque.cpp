/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:04:50 by masebast          #+#    #+#             */
/*   Updated: 2023/05/03 19:16:29 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int fillDdeque(std::deque<int> *mergeTarget, char *argv[])
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

int myMerge(std::deque<int> *mergeTarget, int begin, int end)
{
	std::deque<int> left;
	std::deque<int> right;
	
	return (0);
}

int mySort(std::deque<int> *mergeTarget, int begin, int end)
{
	int average = (end + begin) / 2;

	if (begin - end > 10)
	{
		mySort(mergeTarget, begin, average);
		mySort(mergeTarget, average, end);
		myMerge(mergeTarget, begin, end);
	}
	// else
	// {
	// 	myInsertSort();
	// }
	return (0);
}

int sortAndMergeDeque(std::deque<int> *mergeTarget)
{
	int begin, end;

	begin = 0;
	end = mergeTarget->size();
	mySort(mergeTarget, begin, end);
	// mergeTarget->sort();
	// mergeTarget->unique();
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