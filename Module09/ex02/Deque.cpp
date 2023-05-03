/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:04:50 by masebast          #+#    #+#             */
/*   Updated: 2023/05/03 21:07:38 by masebast         ###   ########.fr       */
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

	std::cout << "here" << std::endl;
	while (begin < end)
	{
		std::cout << "in while: begin = " << begin << std::endl;
		index = begin + 1;
		while (index < end)
		{
			std::cout << "in check: index = " << index << std::endl;
			if (mergeTarget->at(index) < mergeTarget->at(begin))
			{
				std::cout << "swapping" << std::endl;
				iter1 = mergeTarget->begin();
				iter1 += begin;
				iter2 = mergeTarget->begin();
				iter2 += index;
				std::cout << "iters increased" << std::endl;
				tmp = mergeTarget->at(index);
				std::cout << "tmp = " << tmp << std::endl;
				mergeTarget->insert(iter1, mergeTarget->at(begin));
				mergeTarget->insert(iter2, tmp);
				std::cout << "done" << std::endl;
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