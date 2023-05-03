/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:04:50 by masebast          #+#    #+#             */
/*   Updated: 2023/05/03 21:28:33 by masebast         ###   ########.fr       */
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

int myMerge(std::deque<int> *mergeTarget, int begin, int end)
{
	int index, tmp;
	std::deque<int>::iterator iter1;
	std::deque<int>::iterator iter2;

	// BELOW: error! We need the iterator at 'begin' position, not the beginning of the deque
	
	while (begin < end)
	{
		index = begin + 1;
		while (index < end)
		{
			if (mergeTarget->at(index) < mergeTarget->at(begin))
			{
				iter1 = mergeTarget->begin();
				iter2 = mergeTarget->begin();
				std::advance(iter1, index);
				std::advance(iter2, begin);
				tmp = mergeTarget->at(index);
				mergeTarget->insert(iter1, mergeTarget->at(begin));
				mergeTarget->insert(iter2, tmp); // ERROR HERE!!!
				std::cout << "here merging" << std::endl;
				break;
			}
			index++;
		}
		begin++;
	}
	return (0);
}

int mySort(std::deque<int> *mergeTarget, int begin, int end)
{
	int average;

	if (end - begin <= 5)
		myMerge(mergeTarget, begin, end);
	else
	{
		average = (end + begin) / 2;
		mySort(mergeTarget, begin, average); // first chunk
		mySort(mergeTarget, average, end); // second chunk
	}
	return (0);
}

int sortAndMergeDeque(std::deque<int> *mergeTarget)
{
	int begin, end;

	begin = 0;
	end = mergeTarget->size();
	mySort(mergeTarget, begin, end);
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