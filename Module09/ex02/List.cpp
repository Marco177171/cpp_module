/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masebast <masebast@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:04:50 by masebast          #+#    #+#             */
/*   Updated: 2023/05/03 18:20:14 by masebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int fillList(std::list<int> *mergeTarget, char *argv[])
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

int myMerge(std::list<int> *mergeTarget, int begin, int end)
{
	(void) begin;
	(void) end;
	int counter = 0;
	int average = mergeTarget->size() / 2;
	std::list<int> left;
	std::list<int> right;
	std::list<int>::iterator iter;
	std::list<int>::iterator leftIter;
	std::list<int>::iterator rightIter;

	iter = mergeTarget->begin();
	// create left and right
	while (iter != mergeTarget->end())
	{
		if (counter < average)
			left.push_back(*iter);
		else
			right.push_back(*iter);
		counter++;
		iter++;
	}
	// sort list
	iter = mergeTarget->begin();
	leftIter = left.begin();
	while (leftIter != left.end())
	{
		rightIter = right.begin();
		while (rightIter != right.end())
		{
			if (*leftIter > *rightIter)
			{
				mergeTarget->insert(iter, *rightIter, 2);
				iter++;
				break;
			}
			rightIter++;
		}
		leftIter++;
	}
	return (0);
}

int mySort(std::list<int> *mergeTarget, int begin, int end)
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

int sortAndMergeList(std::list<int> *mergeTarget)
{
	int begin, end;

	begin = 0;
	end = mergeTarget->size();
	mySort(mergeTarget, begin, end);
	// mergeTarget->sort();
	// mergeTarget->unique();
	return (0);
}

int printListResult(std::list<int> *mergeTarget)
{
	std::list<int>::iterator iter;

	iter = mergeTarget->begin();
	std::cout << "After (list) : ";
	while (iter != mergeTarget->end())
	{
		std::cout << *iter << " ";
		iter++;
	}
	std::cout << std::endl;
	return (0);
}